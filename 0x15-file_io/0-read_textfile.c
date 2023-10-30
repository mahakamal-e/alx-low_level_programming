#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: pointer to file
 * @letters: num of bytes to printed
 *
 * Return: The actual number of letters it could read and print
 * if file can not be opened return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_;
	char *buffer_;

	buffer_ = malloc(sizeof(char) * (letters));

	if (filename == NULL || buffer_ == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bytes_ = read(fd, buffer_, letters);
	bytes_ = write(STDOUT_FILENO, buffer_, bytes_);

	close(fd);
	free(buffer_);
	return (bytes_);
}
