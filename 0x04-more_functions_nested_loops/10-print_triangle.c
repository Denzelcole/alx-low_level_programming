#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Determines how big the triangle
 *
 * Description: This will print a traingle shape
 * but based on the size of size parameter
 *
 * Return: void (nothing)
 */
void print_triangle(int size)
{
	int cunt, sh;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cunt = 1; cunt <= size; cunt++)
		{
			for (sh = 1; sh <= size; sh++)
			{
				if (sh <= size - cunt)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
