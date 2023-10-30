#include "main.h"
#define UNUSED(code_error) (void)(code_error)
/**
 * handle_error - check any error related to files
 * @code_error: error
 * @error_mess: message error
 */
void handle_error(int code_error, const char *error_mess)
{
	UNUSED(code_error);

	dprintf(STDERR_FILENO, "Error: %s\n", error_mess);
	exit(code_error);
}

/**
 * main - check the code
 * @argc: number of arg
 * @argv: value of arg
 * Return: 1 on success 0 on failure
 */
int main(int argc, char **argv)
{
	int _file_from = 0;
	int _file_to = 0;
	ssize_t _bytes;
	char buffer_[BUFF_SIZE];

	if (argc != 3)
		handle_error(97, "Usage: cp file_from file_to");

	_file_from = open(argv[1], O_RDONLY);
	if (_file_from == -1)
		handle_error(98, "Can't read from file");

	_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (_file_to == -1)
		handle_error(99, "Can't write to file");

	while ((_bytes = read(_file_from, buffer_, BUFF_SIZE)) > 0)
	{
		if (write(_file_to, buffer_, _bytes) != _bytes)
			handle_error(99, "Can't write to file");
	}
	if (_bytes == -1)
		handle_error(98, "Can't read from file");
	if (close(_file_from) == -1 || close(_file_to) == -1)
		handle_error(100, "Can't close fd");
	return (0);
}
