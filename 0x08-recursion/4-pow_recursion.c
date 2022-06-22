#include "main.h"

/**
 * _pow_recursion - returns the value3 of x raised to the power y
 * @x: the number to be raised
 * @y: the power x is raised by
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);

	return (result);
}
