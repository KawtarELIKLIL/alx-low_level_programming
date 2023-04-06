#include "main.h"
/**
*hp_prime_number - cheks if the integer is a prime number
*@nm: input number
*@i: input loop number
*Return: 1 if a prime number
*/
int hp_prime_number(int nm, int i)
{
	if (nm == i)
		return (1);
	else if (nm % i == 0)
		return (0);
	return (hp_prime_number(nm, i + 1));
}
/**
*is_prime_number - cheks if the integer is a prime number
*@n: input number
*Return: 1 if a prime number
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (hp_prime_number(n, 2));
}
