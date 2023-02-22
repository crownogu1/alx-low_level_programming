#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: No return value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
