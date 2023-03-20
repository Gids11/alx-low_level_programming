#include <stdio.h>
/**
 * main - single digit numbers starting from zero and using putchar
 *
 * Return: 0
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 0; numb++)
		putchar((numb % 10) + '0');
	putchar('\n');
	return (0);
}
