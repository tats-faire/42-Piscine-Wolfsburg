/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:34:27 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/19 15:57:22 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenum(char *p)
{
	write (1, &*p, 1);
	write (1, &*(p + 1), 1);
	write (1, " ", 1);
	write (1, &*(p + 2), 1);
	write (1, &*(p + 3), 1);
}

void	convert(int first, int scnd)
{
	char	ch_digit[4];
	int		digit[4];
	char	*p;

	p = ch_digit;
	digit[0] = first / 10;
	ch_digit[0] = digit[0] + '0';
	digit[1] = first % 10;
	ch_digit[1] = digit[1] + '0';
	digit[2] = scnd / 10;
	ch_digit[2] = digit[2] + '0';
	digit[3] = scnd % 10;
	ch_digit[3] = digit[3] + '0';
	writenum (p);
	if (!((first == 98) && (scnd == 99)))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	scnd;

	first = 0;
	while (first <= 98)
	{
		scnd = first + 1;
		while (scnd <= 99)
		{
			convert(first, scnd);
			scnd++;
		}
		first++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
