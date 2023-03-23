#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m <= 14; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
					_putchar (n % 10 + '0');
		}
		_putchar('\n');
	}

}
