#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 *         Numbers must be separated by ,, followed by a space
 *         The three digits must be different
 *
 *         Return: always 0
 */

int main(void)
{
	int l;
	int m;
	int n;

	for (l = 0 ; l < 10 ; l++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			for (n = 0 ; n < 10 ; n++)
			{
				if (l < m && m < n)
				{
					putchar(l + '0');
					putchar(m + '0');
					putchar(n + '0');
					if (l + m + n != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
