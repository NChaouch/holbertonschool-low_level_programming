#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gives the order of the last digit of n
 * n - the integer
 *
 * Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of %d is ", n);
printf("%d and is greater than 5", n % 10);
}
else if (n == 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
