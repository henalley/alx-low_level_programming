#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * Entry point - main
 *
 * Description: Program that generates positive or negative numbers icluding 0 stored in the variable n
 *
 * Return always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n<0);
	printf("is negative");
	
	if (n>0);
	printf("is positive");
	
	if (n=0);
	printf("is zero");

	return (0);
}
