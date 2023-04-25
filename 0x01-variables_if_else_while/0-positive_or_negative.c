#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
*
* Return: 0 (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	      printf("4d is 4s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("4d is 4s\n", n, "positive");
	}
	else
	{
		printf("4d is 4s\n", n, "zero");
	}
	return (0);
