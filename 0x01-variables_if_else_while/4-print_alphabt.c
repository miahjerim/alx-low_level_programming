#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *         followed by a new line
 *         Print all the letters except q and e
 *
 *         Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar ('\n');
		return (0);
}
