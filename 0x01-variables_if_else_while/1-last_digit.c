#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, x;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
x = n % 10;
if (x > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, x);
else if (x == 0)
printf("Last digit of %i is 0 and is 0\n");
else if (x < 6 && x != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
return (0);
}
