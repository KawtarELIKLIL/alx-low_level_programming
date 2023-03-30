#include "main.h"
/**
*cap_string - capitalizes all words of a string
  *@s: input char
  *Return: capitalizes all words of a string
  */
char *cap_string(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (!(s[i - 1] >= 'a' && s[i - 1] <= 'z')
			&& !(s[i - 1] >= 'A' && s[i - 1] <= 'Z'))
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
