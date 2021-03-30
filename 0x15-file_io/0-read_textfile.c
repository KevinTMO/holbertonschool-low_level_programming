#include "holberton.h"

/**
 *read_textfile - will read a textfile and write then into stdout
 *@filename: is the strings to read
 *@letters: are the byte of the strings (chars)
 *Return: will return -1 or 0 if fails || return the variable _write if sucess
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	_read = read(fd, buffer, letters);
	{
		if (_read == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	}
	_write = write(1, buffer, _read);
	{
		if (_write == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	}
	close(fd);
	return (_write);
}
