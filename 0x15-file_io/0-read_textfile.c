#include "holberton.h"
/**
 * read_textfile - read, write and the print
 * @filename: name of file to print
 * @letters: size to text print
 * Return: return the value write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff[1000];
	int i, v_read, v_write;

	if (buff == NULL)
		return (-1);

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	v_read = read(i, buff, letters);

	if (v_read == -1)
		return (0);

	v_write = write(STDOUT_FILENO, buff, v_read);
	if (v_write == -1)
		return (0);

	close(i);
	return (v_write);
}
