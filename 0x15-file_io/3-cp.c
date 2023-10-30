#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH | S_IWGRP)

/**
 * main - check the code
 * @argc: number of arg
 * @v: value of arg
 * Return: 1 on success 0 on failure
 */
int main(int argc, char **v)
{
	int file_from, file_to;
	int r_bytes, w_bytes;
	char buffer_[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(v[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", v[1]), exit(98);

	file_to = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", v[2]), exit(99);
	r_bytes = 1;
	while (r_bytes)
	{
		r_bytes = read(file_from, buffer_, BUFF_SIZE);
		if (r_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", v[1]), exit(98);
		if (r_bytes > 0)
		{
			w_bytes = write(file_to, buffer_, r_bytes);
			if (w_bytes != r_bytes || w_bytes == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", v[2]), exit(99);
		}
	}

	file_from = close(file_from);

	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	file_to = close(file_to);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
