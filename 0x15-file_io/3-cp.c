#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * r_error - read error
 * @filename: file name
 */
void r_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * w_error - write error
 * @filename: file name
 */
void w_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
 * c_error - close error
 * @fd: input fd
 */
void c_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - copy app
 * @ac: argument count
 * @av: arguments list
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, state = 1, wr_state;
	int to_flags = O_CREAT | O_WRONLY | O_TRUNC;
	char buffer[BUFFER_SIZE];
	mode_t to_mode_grp = S_IWGRP | S_IRGRP;
	mode_t to_mode_usr = S_IRUSR | S_IWUSR;
	mode_t to_mode_oth = S_IROTH;
	mode_t to_mode = to_mode_grp | to_mode_usr | to_mode_oth;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		r_error(av[1]);
	fd_to = open(av[2], to_flags, to_mode);
	if (fd_to == -1)
		w_error(av[2]);
	while (state)
	{
		state = read(fd_from, buffer, BUFFER_SIZE);
		if (state == -1)
			r_error(av[1]);
		if (state > 0)
		{
			wr_state = write(fd_to, buffer, state);
			if (wr_state != state || wr_state == -1)
				w_error(av[2]);
		}
	}
	state = close(fd_from);
	if (state == -1)
		c_error(fd_from);
	state = close(fd_to);
	if (state == -1)
		c_error(fd_to);
	return (0);
}
