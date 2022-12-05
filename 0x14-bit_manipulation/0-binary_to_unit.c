#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Convert a binary digit to an unsigned int decimal
 * @b: String to convert
 * Return: Converted decimal representation of binary digit.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c, d;

	if (!b)
		return (0);

	c = 0;
	for (d = 0; d < strlen(b); d++)
	{
		/* Shift c one bit to the left */
		c <<= 1;
		if (b[d] == '1')
			/* Set each on bit. */
			c |= 1;
		else if (b[d] == '-' || b[d] != '0')
			return (0);
	}

	return (c);
}
