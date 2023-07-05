/**
* _sqrt_recursion - sdfsf
* @n: sdfsdf
* Return: sdfsdf
*/
int _sqrt_recursion(long n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);

	if (n < 10000000)
		n = n * 10000000;
	if ((n / 10000000) == (n % 10000000))
		return (-1);
	if (n / 10000000 == (n % 10000000) * (n % 10000000))
		return (n % 10000000);
	else
		return (_sqrt_recursion(n + 1));
}
