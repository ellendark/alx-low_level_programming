#include "main.h"

/**
 * _isupper - check for upper case character
 * @c: character
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{

	/*Assign c to int ch */
	int ch = c;

	if (ch > 64 && ch < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
