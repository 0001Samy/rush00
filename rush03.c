/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushDraft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clmurphy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:17:43 by clmurphy          #+#    #+#             */
/*   Updated: 2021/08/07 13:56:54 by clmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void first_and_last_row(int x, int y)
{
	int i;

	i = 0;
	if (x ==1)
		ft_putchar('A');
	ft_putchar('A');
	while(i < x-2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void  print_middle(int x, int y)
{
	int i;

	i = 0;
	if (x ==1)
		ft_putchar('B');
	ft_putchar('B');
	while(i < x-2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void last_row(int x, int y)
{
	int i;

	i = 0;
	if (x ==1)
		ft_putchar('C');
	ft_putchar('C');
	while(i < x-2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
}

int rush(int x, int y)
{
	if (x < 1 && y < 1)
		return (0);
	first_and_last_row(x, y);
	while (y-- != 2)
	{
		print_middle(x, y);
	}
first_and_last_row(x, y);
	ft_putchar('\n');
	return(0);
}

int	main() 
{
	rush(4, 4);
	return (0);
}
