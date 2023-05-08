#include "main.h"

/**
 * read_textfile - read a text file, print it to the POSIX standard output
 * @letters: number of letters to print
 * @filename: name of file
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, getletters;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		free(buff);
		return (0);
	}
	getletters = read(a, buff, letters);
	if (getletters == -1)
	{
		close(a);
		free(buff);
		return (0);
	}
	for (b = 0; b < getletters; b++)
	{
		if (write(STDOUT_FILENO, &buff[b], 1) == -1)
		{
			close(a);
			free(buff);
			return (0);
		}
	}
	close(a);
	free(buff);
	return (getletters);
}
