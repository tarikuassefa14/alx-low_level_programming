#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: first string
 *
 * @needle: second string
 *
 * Return: Null
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
