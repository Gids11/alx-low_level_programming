#include <stdio.h>
/**
 * main - A program to print the umber of argument followed by a new line
 *@argc: number of arguments in the program
 *@argv: pointer array to the program
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
