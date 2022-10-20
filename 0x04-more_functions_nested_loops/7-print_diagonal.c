#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: number of diagonal lines
 *
 * Description: This function prints a diagonal line
 * that end with a new line
 *
 * Return: void (nothing)
 */
void print_diagonal(int n)
{
	int cunt = 0;
	int diagnl = 0;

	if (n > 0)
	{
		while (cunt < n)
		{
			while (diagnl < cunt)
			{
				_putchar(' ');
				diagnl++;
			}
			cunt++;
			diagnl = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
