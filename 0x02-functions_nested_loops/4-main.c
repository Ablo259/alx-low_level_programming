#include <stdio.h>
int isalpha(int c);
int main(void)
{
	int r;
        r = isalpha('H');
	putchar(r + '0');
	r = isalpha('o');
	putchar(r + '0');
	r = isalpha(108);
	putchar(r + '0');
	r = isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
