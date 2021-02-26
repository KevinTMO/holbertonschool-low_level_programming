#include "holberton.h"

/**
 *get_prime_number - will get the prime number and compare it with n
 *@n: this is the value of n to get the prime number from
 *@incre: will iterate to get the prime number of n
 *Return: will return -1 is n is less than what the incre is
 */

int get_prime_number(int n, int incre)
{
	if (n % incre == 0)
	{
		return (0);
	}
	if (incre > n / incre)
	{
		return (1);
	}

	return (get_prime_number(n, incre + 1));
}

/**
 *is_prime_number - will get the prime number
 *@n: is the variable with number
 *Return: will return 0 if not a prime
 */

int is_prime_number(int n)
{
	int incre = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (get_prime_number(n, incre));
}
