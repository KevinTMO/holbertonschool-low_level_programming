#include "holberton.h"

/**
 *_strlen - will return the length of a pointer
 *@s: the pointer that we need to check
 *Return: will return index with the lenght of the pointer
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}
	return (index);
}

/**
 *create_file - will create a file with write flag or truncate if got something
 *@filename: will the be the file to create
 *@text_content: will be the content for the file
 *Return: will return 1 if sucess or -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!(filename) || !(text_content))
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	_write = write(fd, text_content, _strlen(text_content));

	if (_write == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
