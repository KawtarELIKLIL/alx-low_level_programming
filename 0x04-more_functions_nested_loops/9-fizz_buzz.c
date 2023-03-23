#include<stdio.h>

/**
* main - prints numbers to 100
*
* Return: always 0
*/

int main(void)
{
	int n;
	int i = 1;

	printf("%d", i);
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if ((n % 3) == 0)
			printf("Fizz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else
		{
			if (n > 9)
			{
				printf("%d", n / 10);
			}
			printf("%d", n % 10);
		}
	}
	printf("\n");
	return (0);
}
