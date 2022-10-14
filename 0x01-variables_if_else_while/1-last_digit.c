#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Check and pritns if lastdigit is positive or negative.
*
* Description: Using rand, srand and RAND_MAX as functions.
* Store the string to check
* Our string here is 5
*
* Return 0 (sucess)
*/
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	printf("\n");
	return (0);
}












