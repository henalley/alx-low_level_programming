#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * Entry point - main
 *
 * Description: Program that generates +/- numbers stored in the variable n
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n");
	}
	else if (n > 0)
	{
		printf("%d is positive\n");
	}
	else
	{
		printf("%d is zero\n");
	}
	return (0);
}
