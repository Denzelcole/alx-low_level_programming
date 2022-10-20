#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the number of lines
 *
 * Description: This functon takes n argument
 * and determine the number of straight line to be printed
 * if n is 0 or less then a new line will be printed
 *
 * Return: void (nothing)
 */
void print_line(int n)
{
	int lsize;

	for (lsize = 1; lsize <= n; lsize++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
