#include <stdio.h>
#include <stdlib.h>
/**
 * main - change for an amount of money
 * @argc: number of argument
 * @argv: name of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;
	int money;
	int change = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("%c\n", '0');
			return (0);
		}
		else
		{
			for (n = 0; n < 5; n++)
			{
				change += money / coin[n];
				money = money % coin[n];
				if (money == 0)
				{
					printf("%d\n", change);
					return (0);
				}
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
