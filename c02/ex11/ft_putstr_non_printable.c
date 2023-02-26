/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:56:30 by thetzel           #+#    #+#             */
/*   Updated: 2023/02/25 16:22:22 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	makehex(int hexme, int i)
{
	char	*hexconvert;

	hexconvert = "0123456789abcdef";
	if (hexme >= 16)
	{
		makehex((hexme / 16), 1);
		makehex((hexme % 16), 1);
	}
	else
	{
		if (i == 0)
			write(1, "0", 1);
		write(1, &hexconvert[hexme], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	decnonprint;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			decnonprint = (int)str[i];
			makehex(decnonprint, 0);
		}
		i++;
	}
}

int main(void)
{
	char str[] = {"Hello\tWorld test\v"};
	ft_putstr_non_printable(str);
}
