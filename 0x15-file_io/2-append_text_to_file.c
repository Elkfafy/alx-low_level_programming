#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: file text content
 * Return: success or not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, text_size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (text_size = 0; text_content[text_size] != '\0'; text_size++)
		;
	res = write(fd, text_content, text_size);
	if (res < 0)
		return (-1);
	close(fd);
	return (1);
}
