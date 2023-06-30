/**
* reverse_array - sdfsdfs
* @a: sdfsdf
* @n: sdfsd
* Return: sdfdsfs
*/
void reverse_array(int *a, int n)
{
	int i, d;

	for (i = 0; i < (n / 2); i++)
	{
		d = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = d;
	}
}
