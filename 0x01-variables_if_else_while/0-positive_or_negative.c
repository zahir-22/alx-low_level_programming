#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive, zero or negative 
 * Return: always (success)
 *
 */
int main(void)
	srand(time(0));
	n = rand() RAND_MAX / 2;

	if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
{printf"% is zero \n", n);
}
else
{
	printf("%d is negative\n", n);
}
return (0);

