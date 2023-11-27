#include "main.h"
/**
 * create_file - create file
 * @filename: file name
 * @text_content: text created
 * Return: success or not
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, text_size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	for (text_size = 0; text_content[text_size] != '\0'; text_size++)
		;
	res = write(fd, text_content, text_size);
	if (res < 0)
		return (-1);
	close(fd);
	return (1);
}
