#include "main.h"
int is_prime_recursive(int n, int divisor);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - calculates if a number is prime recursively
 * @n: number to evaluate
 * @divisor: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor + 1));
}
