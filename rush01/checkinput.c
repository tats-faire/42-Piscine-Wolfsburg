/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:58:45 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/20 23:46:20 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	checkactualinput(int argc, char *argv[])
{
	int		i;
	bool	input;

	input = false;
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 1)
		{
			if (argv[1][i] == 32)
				input = true;
			else
				return (false);
		}
		else if (i % 2 == 0)
		{
			if ((argv[1][i] < 53) && (argv[1][i] > 48))
				input = true;
			else
				return (false);
		}
		i++;
	}
	if (i != 31)
		input = false;
	return (input);
}

bool	checkinput(int argc, char *argv[])
{
	bool	input;

	input = false;
	if (argc == 2)
		input = checkactualinput(argc, argv);
	return (input);
}
