#include "main.h"
#include <stdio.h>
/**
  * print_alphabet_x10 - print 10 times
  * Return: 0 Always
  */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}

