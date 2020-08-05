#include "holberton.h"

/**
 * create_file - create file to write
 * @filename: file to read or write
 * @text_content: the content text
 * Return: return 1 if is counter
 */

int create_file(const char *filename, char *text_content)
{
	int i, v_write, j = 1;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (i == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[j])
	{
		j++;
	}
	v_write = write(i, text_content, j);
	close(i);

	if (v_write == -1)
		return (-1);
	return (1);
}
