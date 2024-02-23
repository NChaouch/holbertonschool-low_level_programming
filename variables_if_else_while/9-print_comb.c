#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: (0)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + 48);
if (num < 9)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
