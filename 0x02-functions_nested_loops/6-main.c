#include <stdio.h>

int abs(int);

int main(void)
{
	int r;

        r = abs(-1);
	printf("%d\n", r);
	r = abs(0);
	printf("%d\n", r);
	r = abs(1);
	printf("%d\n", r);
	r = abs(-98);
	printf("%d\n", r);
	return (0);
}
