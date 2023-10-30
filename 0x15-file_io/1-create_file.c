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
	int _bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = " ";
	for (i = 0; text_content[i] != '\0'; i++)
		;

	_bytes = write(fd, text_content, i);

	if (_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
