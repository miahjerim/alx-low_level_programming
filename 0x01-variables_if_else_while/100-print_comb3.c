#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *        Print only the smallest combination of two digits
 *        Numbers should be printed in ascending order, with two digits
 *
 * Return: always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			if (m < n && m != n)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
