#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - checking if the file is positive or negative
*
* Description: we'll be using the srand(), rand(), RAND_MAX function.
* we'll be using n as ouir variable
* we'll also be checking for n to be assinged possible or negative
*
* Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	printf("\n");
	return (0);
}
