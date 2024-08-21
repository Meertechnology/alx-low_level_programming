#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer variable
 * @src: pointer variable
 * @n: variable
 * Return: S Always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pD = dest;
	char *pS = src;

	while (n-- > 0)
		*pD++ = *pS++;
	return (dest);
}
