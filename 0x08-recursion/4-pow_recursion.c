/**
* _pow_recursion - sdfsdfs
* @x: sdfsd
* @y: sdfsd
* Return: sdfsdf
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
