#include "main.h"

/**
* print_rev - print a string in reverse
* @str: string t be processed
* Dexcription: This function prints a given string
* in reverse order
*
* Return: void (nothing)
*/
void print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (j = i - 1; j >= 0; --j)
		_putchar(str[j]);
	_putchar('\n');
}
