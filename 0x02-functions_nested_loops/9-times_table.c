#include <stdio.h>
void times_table(void)
{
	int i, j, res;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			if (j != 0)
			{
				putchar(',');
				putchar(' ');
			}
			if (res >= 10)
			{
				putchar((res / 10) + '0');
				putchar((res % 10) + '0');
			}
			else if (res < 10 && j != 0)
			{
				putchar(' ');
				putchar((res % 10) + '0');
			}
			else
				putchar((res % 10) + '0');

		}
		putchar('\n');
	
	}
}
