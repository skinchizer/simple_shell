#include "shell.h"

/**
 * _atoi - convert str to int
 * @s: input string
 * Return: number after conversion
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
		if (sign == -1)
		{
			output = -result;
		}
		else
		{
			output = result;
		}
	}
		return (output);
}
