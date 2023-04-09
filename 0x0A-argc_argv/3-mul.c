#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * @argv: array of pointers to the argument
 * @argc: number of arguments in the program
 *
 * Return: 0 if the program receives two arguments, otherwise 1
 */
int main(int argc, char **argv)
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
}
		a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
