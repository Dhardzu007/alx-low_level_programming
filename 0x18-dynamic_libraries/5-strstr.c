#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to be search
 * @needle: the substring to be located
 * Return: if the substring is located
 * if the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
