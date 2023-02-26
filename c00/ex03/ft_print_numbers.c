/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:56:47 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/19 16:23:19 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		n;

	n = 0;
	while (n <= 9)
	{
		ft_putchar(n + '0');
		n++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
