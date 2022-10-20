#include <stdio.h>
#include <math.h>

int is_prime(long num);
/**
 * main - largest prime factor of the number 612852475143
 *
 * Description: The largest prime factor of 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int num, cunt, maxprime;

	num = 612852475143;
	maxprime = 2;
	for (cunt = 2; cunt <= num; cunt++)
	{
		if (num % cunt == 0)
		{
			if (is_prime(cunt))
			{
				num = num / cunt;
				if (is_prime(num))
				{
					maxprime = num;
					break;
				}
				if (cunt > maxprime)
				{
					maxprime = cunt;
				}
			}
		}
	}
	printf("%li\n", maxprime);
	return (0);
}

/**
 * is_prime - check whether a number is prime or not
 * @num: the number to be checked
 *
 * Description: Checks if a number is primw or not
 *
 * Return: 1 if number is prime, otherwise 0
 */
int is_prime(long num)
{
	long cunt;

	for (cunt = 2; cunt <= sqrt(num); cunt++)
	{
		if (num % cunt == 0)
		{
			return (0);
		}
	}
	return (1);
}
