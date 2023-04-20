#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: array of pointers to the argument
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int c, d;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = atoi(argv[1]);
	op = argv[2];
	d = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && d == 0) || (*op == '%' && d == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(c, d));
	return (0);
}
