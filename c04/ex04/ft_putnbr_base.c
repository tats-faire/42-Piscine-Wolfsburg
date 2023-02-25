/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:02:18 by thetzel           #+#    #+#             */
/*   Updated: 2023/02/25 16:56:34 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	errorfinder(char *base)
{
	int	doublechecker;
	int	i;

	i = 0;
	while (base[i])
	{
		if ((base[i] <= 32) || (base[i] == 43) || (base[i] == 45|| (base[i] == 127)))
			return (1);
		doublechecker = i + 1;
		while (base[doublechecker])
		{
			if (base[doublechecker] == base[i])
				return (1);
			doublechecker++;
		}
		i++;
	}
	if (i <= 1 || base[0] == '\0')
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = ft_strlen(base);
	if (errorfinder(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < l)
		write(1, &base[nbr], 1);
	else if (nbr >= l)
	{
		ft_putnbr_base(nbr / l, base);
		ft_putnbr_base(nbr % l, base);
	}
}

/* int main(void)
{
	int nbr = 73;
	char base[] = "poneyvif";
	ft_putnbr_base(nbr, base);
} */
