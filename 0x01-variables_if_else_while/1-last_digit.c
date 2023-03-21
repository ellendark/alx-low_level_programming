#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * program prints the last number of random numbers.
 * Return: Always 0 (Success)
 */

  int main(void)
  {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int lastn = n % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, lastn);
	}

	if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}

	if (lastn < 6 && lastn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, lastn);
	}
	return (0);

}
