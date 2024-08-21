#include "main.h"
#include <stdio.h>
/**
  * _islower - check for lower
  * @c: character
  * Return: 0 Always
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
