#include <stdio.h>
/**
 * main - Numbers of base 16 in lowercase.
 *
 * Return: 0
 */
int main(void)
{
int numb;
char i;

for (numb = 0; numb < 10; numb++)
putchar((numb % 10) + '0');
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
