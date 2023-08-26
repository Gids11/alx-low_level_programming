#include "main.h"
/**
 * read_textfile - Reads a file and outputs to the POSIX stdout.
 * @filename: name of the file
 * @letters: number of letters.
 * Return: The actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int a;
	int read_;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buf);
		return (0);
	}

	read_ = read(f, buf, letters);
	if (read_ == -1)
	{
		close(f);
		free(buf);
		return (0);
	}

	for (a = 0; a < read_letters; a++)
	{
		if (write(STDOUT_FILENO, &buf[a], 1) == -1)
		{
			close(f);
			free(buf);
			return (0);
		}

	}
	close(f);
	free(buf);
	return (read_);
}
