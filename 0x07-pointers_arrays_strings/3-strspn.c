#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: pointer variable
 * @accept: second poiter variable
 * Return: the number of bytes of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int ten;

	ten = strspn(s, accept);
	return (ten);
}
