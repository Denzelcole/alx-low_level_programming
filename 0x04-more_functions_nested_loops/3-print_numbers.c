#include "main.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Description: This function prints digits
 * from 0-9 but from ASCII charcater 48-57
 *
 * Return: void (nothing)
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		_putchar(num);
	_putchar('\n');
}
