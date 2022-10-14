#include <stdio.h>

/**
* main - prints out the size of various Data Types
*
* Description:
* printing sizes of each Data types
* Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: %Id byte(s)\n", sizeof(char));
	printf("Size of an int: %Id byte(s)\n", sizeof(int));
	printf("Size of a long int: %Id byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(long long int));
	printf("Size of a float: %Id byte(s)\n", sizeof(float));
	return (0);
}
