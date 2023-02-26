/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 23:03:27 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/20 23:43:31 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	checkinput(int argc, char *argv[]);

void	transformargs(char arr[])
{
	int		i;
	int		j;
	char	input[16];

	i = 0;
	j = 0;
	while (i <= 30)
	{
		if ((arr[i] >= 48) && (arr[i] <= 57))
		{
			input[j] = arr[i];
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (checkinput(argc, argv))
	{
		write (1, "Your input looks correct! Now solve it yourself\n", 62);
	}
	else
	{
		write (1, "Error\n", 6);
	}
	return (0);
}
