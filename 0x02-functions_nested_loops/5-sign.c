#include "main.h"
/**
  * print_sign - print sign
  * @n: character
  * Return: 1 if positife
  * 0 if null
  * -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
