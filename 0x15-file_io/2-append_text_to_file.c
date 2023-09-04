#include "main.h"
/**
 * append_text_to_file - Appending text to the end of a file.
 * @filename: Name of file
 * @text_content: String
 * Return: 1 if the file exist, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int a;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	f = open(filename, O_APPEND | O_WRONLY);
	if (f == -1)
		return (-1);
	for (a = 0; text_content[a] != '\0'; a++)
	{
		if (write(f, &text_content[a], 1) == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}

