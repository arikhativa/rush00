#include<unistd.h>

int	generic_print(int j, int x, char chars_to_print[3])
{
	while (j <= x)
	{
		if (j == 1)
			write(1, &chars_to_print[0], 1);
		else if (j == x)
			write(1, &chars_to_print[1], 1);
		else
			write(1, &chars_to_print[2], 1);
		++j;
	}
	return (j);
}

int	side_logic(int j, int x)
{
	char	chars_to_print[3];

	chars_to_print[0] = 'H';
	chars_to_print[1] = 'H';
	chars_to_print[2] = ' ';
	j = generic_print(j, x, chars_to_print);
	write(1, "\n", 1);
	return (j);
}

int	bottom_logic(int j, int x)
{
	char	chars_to_print[3];

	chars_to_print[0] = 'B';
	chars_to_print[1] = 'A';
	chars_to_print[2] = 'H';
	return (generic_print(j, x, chars_to_print));
}

int	top_logic(int j, int x)
{
	char	chars_to_print[3];

	chars_to_print[0] = 'A';
	chars_to_print[1] = 'B';
	chars_to_print[2] = 'H';
	return (generic_print(j, x, chars_to_print));
}

void	ft_prueba(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		if (i == 1)
			j = top_logic(j, x);
		if (i == y)
			j = bottom_logic(j, x);
		else
			j = side_logic(j, x);
		i++;
	}
}
