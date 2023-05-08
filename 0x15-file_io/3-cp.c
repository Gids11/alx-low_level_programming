#include "main.h"
int _openfiles_(char *_from, char *_to);
int _readfiles_(int from_file, int to_file, char *_from, char *_to);
int writetofile(char *buff, int to_a, int read_chars, char *_to);

/**
 * main - main entry
 * @argc: Argument Count
 * @argv: arguments passed to the program
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *_from;
	char *_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_from = argv[1];
	_to = argv[2];

	_openfiles_(_from, _to);
	exit(0);
	return (0);
}

/**
 * _openfiles_ - Opens files for copying contents.
 * @_from: Source.
 * @_to: Destination
 *
 * Return: 0
 */
int _openfiles_(char *_from, char *_to)
{
	int from_file;
	int to_file;

	from_file = open(_from, O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", _from);
		exit(98);
	}
	to_file = open(_to, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (to_file == -1)
	{
		to_file = open(_to, O_WRONLY | O_TRUNC);
		if (to_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", _to);
			exit(99);
		}
	}
	_readfiles_(from_file, to_file, _from, _to);
	if (close(from_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	if (close(to_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file);
		exit(100);
	}
	return (0);
}
/**
 * _readfiles_ - Reads file
 * @from_file: source file
 * @to_file: destination file
 * @_from: the file FILE_FROM
 * @_to: the file FILE_TO
 *
 * Return: 0
 */
int _readfiles_(int from_file, int to_file, char *_from, char *_to)
{
	int _chars;
	char buff[1024];

	_chars = read(from_file, buff, 1024);
	if (_chars == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", _from);
		exit(98);
	}
	writetofile(buff, to_file, _chars, _to);
	while (_chars != 0)
	{
		_chars = read(from_file, buff, 1024);
		if (_chars == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", _from);
			exit(98);
		}
		if (_chars == 0)
			return (0);
		writetofile(buff, to_file, _chars, _to);
	}
	return (0);
}

/**
 * writetofile - Writes to the TO_FILE
 * @buff: contains up to 1024 chars.
 * @to_file: theTO_FILE.
 * @_chars: characters to be written
 * @_to: the file FILE_TO
 *
 * Return: 0
 */
int writetofile(char *buff, int to_file, int _chars, char *_to)
{
	int a;

	for (a = 0; a < _chars; a++)
	{
		if (write(to_file, &buff[a], 1) == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", _to);
			exit(99);
		}
	}
	return (0);
}
