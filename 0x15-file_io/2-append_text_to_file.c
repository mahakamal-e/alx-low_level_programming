#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: character to appends
 * Return: number of bytes of string
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0;
	ssize_t i;
	ssize_t _bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	for (i = 0 ; text_content[i] != '\0'; i++)
		length++;

	_bytes = write(fd, text_content, length);

	if (_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
