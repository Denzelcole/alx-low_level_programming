#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 *
 * Description: This function prints 0-9 apart from
 * 2 and 4. 48-57 in ASCII is 0-9 and 50-52 is 2-4
 *
 * Return: void (nothing)
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
			continue;
		else
			_putchar(num);
	}
	_putchar('\n');
}
