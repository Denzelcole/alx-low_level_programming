#include "main.h"

/**
* _strlen - return the length of a string
* @str: the string to be processed
*
* Description: This function returns the length of a given
* string
*
* Return: the lenght of the string
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
