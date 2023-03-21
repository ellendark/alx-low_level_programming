nclude <stdio.h>

/**
 * main - Entry point  *
 * program prints alphabet in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
		putchar ('\n');

	return (0);
}
