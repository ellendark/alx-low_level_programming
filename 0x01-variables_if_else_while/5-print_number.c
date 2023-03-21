#include <stdio.h>
/**
 * main - Entry point
 * Program prints base 10 numbers fro 0 t0 10;    
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)					
	{
		
		putchar(i);
	}

	putchar('\n');
	return (0);
}
