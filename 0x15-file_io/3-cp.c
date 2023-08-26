#include"main.h"

int open_(char *f_from, char *f_to);
int read_file_(int from_f, int to_f, char *f_from, char *f_to);
int write_(char *buff, int to_f, int read_, char *f_to);

/**
 * main - main function
 * @argc: arguments count.
 * @argv: An array of strings containing the arguments passed to the program.
 * Return: Always zero, but It will have exit 97 when there it does not have
 * the right number of parameters, 98 when it can not read / open
 * the file FILE_from, 99 when it can not open/write to the file FILE_TO and
 * 100 when it can not close the file descriptors.
 */
int main(int argc, char **argv)
{
	char *f_from;
	char *f_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = argv[1];
	f_to = argv[2];

	open_(f_from, f_to);
	exit(0);
	return (0);
}

/**
 * open_ - Opens the files needed
 * @f_from: Name of FILE_FROM.
 * @f_to: Name of FILE_TO.
 * Return: Always 0. Exit 98, and 99.
 */
int open_(char *f_from, char *f_to)
{
	int from_f;
	int to_f;

	from_f = open(f_from, O_RDONLY);
	if (from_f == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	to_f = open(f_to, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (to_f == -1)
	{
		to_f = open(f_to, O_WRONLY | O_TRUNC);
		if (to_f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	read_file_(from_f, to_f, f_from, f_to);
	if (close(from_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", from_f);
		exit(100);
	}
	if (close(to_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", to_f);
		exit(100);
	}
	return (0);
}
/**
 * read_file_ - Reads the file FROM_FILE.
 * @from_f: represents FROM_FILE.
 * @to_f: represents TO_FILE.
 * @f_from: Name of FILE_FROM.
 * @f_to: Name of FILE_TO.
 * Return: Always zero. Exit 98.
 */
int read_file_(int from_f, int to_f, char *f_from, char *f_to)
{
	int read_;
	char buff[1024];

	read_ = read(from_f, buff, 1024);
	if (read_ == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	write_(buff, to_f, read_, f_to);
	while (read_ != 0)
	{
		read_ = read(from_f, buff, 1024);
		if (read_ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", f_from);
			exit(98);
		}
		if (read_ == 0)
			return (0);
		write_(buff, to_f, read_, f_to);
	}
	return (0);
}

/**
 * write_ - Writes to TO_FILE.
 * @buff: An array of characters
 * @to_f: File descriptor
 * @read_: characters
 * @f_to: Name of FILE_TO.
 * Return: Always Zero. Exit 99.
 */
int write_(char *buff, int to_f, int read_, char *f_to)
{
	int a;

	for (a = 0; a < read_; a++)
	{
		if (write(to_f, &buff[a], 1) == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	return (0);
}
