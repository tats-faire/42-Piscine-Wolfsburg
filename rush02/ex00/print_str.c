/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:14:28 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 19:57:07 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char	*str, int last)
{
	while (*str != ':')
		str++;
	str++;
	while ((*str >= 9 && *str <= 13) || (*(str) == ' '))
		str++;
	while (*str >= 32 && *str <= 126)
	{
		write(1, str, 1);
		str++;
	}
	if (last == 0)
		write (1, " ", 1);
	return ;
}
