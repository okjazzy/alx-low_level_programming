#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all Possible combination of single-digit numbers
 * Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(',');
}
c++
}
putchar('\n');
return (-);
}
