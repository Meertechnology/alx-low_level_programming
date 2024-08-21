#include "main.h"
#include <string.h>
/**
 * _strpbrk - locates the first occurrences in s of bytes in accept
 * @s: pointer variable
 * @accept: pointer variable
 * Return: bytes in s that matches accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
