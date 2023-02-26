/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:16:40 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/21 15:32:49 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenum(int first, int scnd, int thrd)
{
	int	c;

	c = first + '0';
	write (1, &c, 1);
	c = scnd + '0';
	write (1, &c, 1);
	c = thrd + '0';
	write (1, &c, 1);
	if (first != 7)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	scnd;
	int	thrd;

	first = 0;
	while (first <= 7)
	{
		scnd = first + 1;
		while (scnd <= 8)
		{
			thrd = scnd + 1;
			while (thrd <= 9)
			{
				writenum(first, scnd, thrd);
				thrd++;
			}
			scnd++;
		}
	first++;
	}
}


int	main(void)
{
	ft_print_comb();
}

