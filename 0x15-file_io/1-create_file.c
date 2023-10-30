#include "main.h"
/**
 * create_file - Function that creats a file
 * @filename: pointer to file
 * @text_content: content of the file
 * Return: filename is null return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int len = 0;
	ssize_t _bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content == NULL)
		text_content = " ";
	for (i = 0; text_content[i] != '\0'; i++)
	{
		len++;
	}
	if (len)
		_bytes = write(fd, text_content, len);
	close(fd);

	if (_bytes == len)
		return (1);
	else
		return (-1);
}
