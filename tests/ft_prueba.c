#include<stdio.h>
#include<unistd.h>

int	side_logic(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
			write(1, "H", 1);
		else if (j == x)
			write(1, "H", 1);
		else
			write(1, " ", 1);
		++j;
	}
	write(1, "\n", 1);
	return (j);
}

int	bottom_logic(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
			write(1, "B", 1);
		else if (j == x)
			write(1, "A", 1);
		else
			write(1, "H", 1);
		j++;
	}
	return (j);
}

int	top_logic(int j, int x)
{
	while (j <= x)
	{
		if (j == 1)
			write(1, "A", 1);
		else if (j == x)
			write(1, "B", 1);
		else
			write(1, "H", 1);
		++j;
	}
	return (j);
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
