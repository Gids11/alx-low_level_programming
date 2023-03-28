#include "main.h"
#include <stdio.h>
/**
 * _puts - printing a string followed by a line to the stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
int len;

for (len = 0; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
