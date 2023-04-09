#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of arguments to the program
 * @argv: array of pointers to the argumants
 *
 * Return: 1 if one of the numbers contain symbols not digits, otherwise 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
					return (1);
			}
			}
			sum += atoi(argv[a]);
		}
printf("%d\n", sum);
return (0);
}
