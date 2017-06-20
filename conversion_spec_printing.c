#include "holberton.h"

/**
 * print_str - Prints a string
 * @args: The va_list to get the next arg from
 * @sum: The address of the current sum
 *
 * Return: The address of the updated sum
 */

int *print_str(va_list args, int *sum)
{
	int i;
	char *ptr = va_arg(args, char *);
	char *null = "(NULL)";

	if (ptr == NULL)
	{
		for (i = 0; null[i]; i++)
		{
			write(1, &null[i], sizeof(char));
			*sum = *sum + 1;
		}
	}
	else
	{
		for (i = 0; ptr[i]; i++)
		{
			write(1, &ptr[i], sizeof(char));
			*sum = *sum + 1;
		}
	}
	return (sum);
}

/**
 * print_char - Prints a character
 * @args: The va_list to get the next arg from
 * @sum: The address of the current sum
 *
 * Return: The address of the updated sum
 */

int *print_char(va_list args, int *sum)
{
	char c = va_arg(args, int);

	write(1, &c, sizeof(char));
	*sum = *sum + 1;
	return (sum);
}

/**
 * print_dec - Prints a decimal integer
 * @args: The va_list to get the next arg from
 * @sum: The address of the current sum
 *
 * Return: The address of the updated sum
 */

int *print_dec(va_list args, int *sum)
{
	int d = va_arg(args, int);

	write(1, &d, sizeof(int));
	*sum = *sum + 1;
	return (sum);
}

/**
 * print_int - Prints an integer
 * @args: The va_list to get the next arg from
 * @sum: The address of the current sum
 *
 * Return: The address of the updated sum
 */

int *print_int(va_list args, int *sum)
{
	int i = va_arg(args, int);

	write(1, &i, sizeof(int));
	*sum = *sum + 1;
	return (sum);
}
