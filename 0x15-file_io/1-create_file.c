#include "main.h"
/**
 * create_file - this function creates a file.
 * @filename: The name of file to create.
 * @text_content: a string
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int a;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (f < 0)
	{
		if (errno == EEXIST)
		{
			f = open(filename, O_WRONLY | O_TRUNC);
			if (f == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (a = 0; text_content[a] != '\0'; a++)
	{
		if (write(f, &text_content[a], 1) == -1)
			return (-1);
	}
	close(f);
	return (1);
}

