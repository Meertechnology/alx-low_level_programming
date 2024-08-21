#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: 0 Always
 */
void jack_bauer(void)
{
	int j;
	int n;

	for (j = 0 ; j <= 23 ; j++)
	{
		for (n = 0 ; n <= 59 ; n++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
