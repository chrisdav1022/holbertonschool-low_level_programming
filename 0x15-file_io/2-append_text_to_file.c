#include "holberton.h"
/**
 * append_text_to_file - open the file and the text
 *@filename: pointer to file
 *@text_content: text content in the file
 *Return: return 1 if file is succes
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j = 1, v_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	i = open(filename, O_APPEND | O_WRONLY);

	if (i == -1)
		return (-1);

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
