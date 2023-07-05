/**
* is_prime_number - dfgdfgd
* @n: dfgd
* Return: dfgd
*/
int is_prime_number(long n)
{
	if ((int)n < 0)
	{
		n = n * (-1);
		printf("%ld\n", n);
	}
	if (n == 0 || n == 1)
		return (0);
	if (n < 100000000)
		n = n * 100000000 + 2;
	if (n / 100000000 == n % 100000000)
		return (1);
	if ((n / 100000000) % (n % 100000000) == 0)
		return (0);
	else
		return (is_prime_number(n + 1));
}
