#include <stdio.h>

int print_last_digit(int n)
{
	if (n < 0)
	n = n * -1;
	putchar((n % 10) + '0');
	return (n % 10);
}


