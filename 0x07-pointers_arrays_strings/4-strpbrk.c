#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: first string
 * @accept: the set of bytes to be searched
 * Return: if a set is matched (a pointer to matched byte)
 * if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
