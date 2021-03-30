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
 *append_text_to_file - data written will be appended to the end of the file
 *@filename: will the be the file to create
 *@text_content: will be the content for the file
 *Return: will return 1 if sucess or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
