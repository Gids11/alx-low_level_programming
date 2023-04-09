#include <stdio.h>
/**
 * main - A  program that prints all arguments it receives.
 * @argc: number of arguments in the program
 * @argv: pointer array to the arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
return (0);
}
