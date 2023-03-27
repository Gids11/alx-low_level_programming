#include "main.h"
#include <stdio.h>
/**
 * _puts - printing a string followed by a line to the stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
char *str = 0;

	while (*str)
_putchar(str++);
_putchar('\n');
}
