#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing opcodes
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*new)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)new;
		printf("%.2x", opcode);
		if (i == b - 1)
			continue;
		printf(" ");
		new++;
	}
	printf("\n");
	return (0);
}
