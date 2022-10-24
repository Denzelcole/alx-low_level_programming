#include "main.h"

/**
* puts_half - print the last half of a string
* @str: string to be processed
*
* Decription: if the string length is odd print thje last (length - 1) / 2
*
* Return: void (nothing)
*/
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (j = (i + 1) / 2; j < i; ++j)
		_putchar(str[j]);
	_putchar('\n');
}
