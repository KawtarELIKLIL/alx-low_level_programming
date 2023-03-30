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
			if (s[i - 1] == ' '
			|| s[i - 1] == '\t'
			|| s[i - 1] == '\n'
			|| s[i - 1] == ','
			|| s[i - 1] == 59
			|| s[i - 1] == 46
			|| s[i - 1] == 33
			|| s[i - 1] == 63
			|| s[i - 1] == 22
			|| s[i - 1] == 40
			|| s[i - 1] == 41
			|| s[i - 1] == 123
			|| s[i - 1] == 125)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
