#include "main.h"
/**
*_strstr - locates a substring
*@haystack: input string
*@needle: the substring
*Return: a pointer to the beginning of substring
*/
char *_strstr(char *haystack, char *needle)
{
	int j;
	int i = 0;
	int len = 0;
	int ps, cnt = 0;

	while (needle[len] != '\0')
		len++;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			ps = i;
			for (j = 0; j < len; j++)
			{
				if (haystack[i] == needle[j])
					cnt++;
				i++;
			}
			if (len == cnt)
				return (&haystack[ps]);
		}
		i++;
	}
	return (0);
}
