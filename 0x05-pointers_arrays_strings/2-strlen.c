#include "main.h"
/**
 * strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while(s[a])
		a++;
	return(a);
}
