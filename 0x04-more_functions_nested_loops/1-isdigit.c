#include "main.h"

/**
 *_isdigit - checks for digits 0 through 9
 * @c: accepts characters
 * Return: 1 if c is a digit and 0 if false
 */

int _isdigit(int c)
{
	int ch = c;

	if (ch > 47 && ch < 58)
	{
		return (1);
	}
	else
	{
	return (0);
	}


}
