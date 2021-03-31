#include "holberton.h"

/**
 *__exit - will take the strings to process them as error
 *@error: will be the switch (indicator) to compare with any case below
 *@str: will be the string (argument) depending on the case
 *@fd: will be the file descriptor if fail in the main program
 *Return: will return 0 if sucess
 */

int __exit(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", str);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(error);
	default:
		return (0);

	}
}

/**
 *main - will take an argument (file), copy and paste it in another
 *@argc: will count the arguments
 *@argv: will be the pointer pointing the to strings
 *Return: will return 98, 99 or 100 if fails || return 0 if sucess
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, _read, _write;
	char *buffer[1024];

	if (argc != 3)
	{
		__exit(97, NULL, 0);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		__exit(99, argv[2], 0);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		__exit(98, argv[1], 0);
	}

	while ((_read = read(fd_from, buffer, 1024)) != 0)
	{
		if (_read == -1)
		{
			__exit(98, argv[1], 0);
		}

		_write = write(fd_to, buffer, _read);
		if (_write == -1)
		{
			__exit(99, argv[2], 0);
		}
	}

	close((fd_from) == -1 ? (__exit(100, NULL, fd_from)) : close(fd_from));
	close(fd_to) == -1 ? (__exit(100, NULL, fd_to)) : close(fd_to);
	return (0);
}
