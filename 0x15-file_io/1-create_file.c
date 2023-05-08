#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 if successful, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	a = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (a < 0)
	{
		if (errno == EEXIST)
		{
			a = open(filename, O_WRONLY | O_TRUNC);
			if (a == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (b = 0; text_content[b] != '\0'; b++)
	{
		if (write(a, &text_content[b], 1) == -1)
			return (-1);
	}
	close(a);
	return (1);
}
