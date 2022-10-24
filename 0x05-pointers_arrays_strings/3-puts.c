#include "main.h"

/**
* _puts - prints a string and adds a newline
* @str: string to be printed
*
* Description: This function print a given string
* followed by a newline
*
* Return: void (nothing)
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
