/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:47:18 by clmurphy          #+#    #+#             */
/*   Updated: 2021/08/08 18:33:12 by clmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	first_row(int x, int y)
{
	int	i;

	i = 0;
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_putchar('/');
		while (i++ < x - 2 )
		{
			ft_putchar('*');
		}
		if (x > 1)
			ft_putchar('\\');
		ft_putchar('\n');
	}
	return (0);
}

int	left_right_column(int x, int y)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		while (i++ < y - 2)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
	}
	if (x > 1)
	{
		while (y - 2 > 0)
		{
			y -= 1;
			ft_putchar('*');
			while (i++ < x - 2)
				ft_putchar(' ');
			ft_putchar('*');
			ft_putchar('\n');
			i = 0;
		}
	}
	return (0);
}

int	last_row(int x, int y)
{
	int	i;

	i = 0;
	if (x == 1 && y > 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('\\');
	while (i++ < x - 2)
	{
		ft_putchar('*');
	}
	if (x > 1)
		ft_putchar('/');
		ft_putchar('\n');
	return (0);
}

int	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return (0);
	first_row(x, y);
	left_right_column(x, y);
	if (y > 1)
	{
		last_row(x, y);
	}
	return (0);
}
