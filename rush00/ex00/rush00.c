/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:08:15 by thetzel           #+#    #+#             */
/*   Updated: 2023/02/26 18:43:21 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

bool	write_corner(int x, int y, int hzt, int vtc)
{
	bool	canwrite;

	canwrite = false;
	if ((vtc == 0 && hzt == 0)
		|| (vtc == 0 && hzt == x - 1)
		|| (vtc == y - 1 && hzt == 0)
		|| (vtc == y - 1 && hzt == x - 1))
	{
		canwrite = true;
	}
	return (canwrite);
}

bool	write_wall(int x, int hzt)
{
	bool	canwrite;

	canwrite = false;
	if (hzt == 0 || hzt == x - 1)
	{
		canwrite = true;
	}
	return (canwrite);
}

bool	write_vertical_line(int y, int vtc)
{
	bool	canwrite;

	canwrite = false;
	if (vtc == 0 || vtc == y - 1)
	{
		canwrite = true;
	}
	return (canwrite);
}

void	draw(int x, int y, int vtc, int hzt)
{
	if (write_corner(x, y, hzt, vtc))
	{
		ft_putchar('o');
	}
	else if (write_wall(x, hzt))
	{
		ft_putchar('|');
	}
	else if (write_vertical_line(y, vtc))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	hzt;
	int	vtc;

	hzt = 0;
	vtc = 0;
	if (!(x = 0) && !(y = 0))
	{
		while (vtc < y)
		{
			while (hzt < x)
			{
				draw(x, y, vtc, hzt);
				hzt++;
			}
			hzt = 0;
			ft_putchar('\n');
			vtc++;
		}
	}
}
