#include "main.h"
/**
*leet - string into 1337
*@s: input string
*Return: string into 1337
*/
char *leet(char *s)
{
	int i = 0;
	int j;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char upletter[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == upletter[j])
				s[i] = num[j];
		}
		i++;
	}
	return (s);
}
