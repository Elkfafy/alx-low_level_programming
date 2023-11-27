#include "main.h"
/**
 * read_textfile - read text file func
 * @filename: file name
 * @letters: number of letters
 * Return: the actual number that it can read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int res;
	size_t count = 0;
	int file = open(filename, O_RDONLY);
	char *rd = malloc(sizeof(char) * letters);

	if (rd == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	res = read(file, rd, letters);
	if (res < 0)
		return (0);
	res = write(STDOUT_FILENO, rd, res);
	if (res < 0)
		return (0);
	count = res;
	close(file);
	return (count);
}
