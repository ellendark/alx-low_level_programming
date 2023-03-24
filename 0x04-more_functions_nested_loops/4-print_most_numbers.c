#include "main.h"
/**
 * print_numbers - Print numbers except '2'and '4'
 *
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');

}
