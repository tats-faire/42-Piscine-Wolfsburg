/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilliam <awilliam@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:29:30 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 23:00:02 by awilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkcharacter(char *str, char *to_find, char *location, int counter)
{
	int	correct;

	correct = 0;
	if ((*to_find == '\0')
		&& ((*str >= 9 && *str <= 13) || (*(str) == ' ')
			|| *str == ':'))
		if ((counter == 0)
			|| ((*(location - 1) >= 9 && *(location - 1) <= 13)
				|| (*(location - 1) == ' ')))
			correct = 1;
	return (correct);
}

char	*actual_strstr(char *str, char *to_find, int i, int j)
{
	char	*location;
	int		counter;

	counter = 0;
	while (str[i])
	{
		j = 0;
		location = &str[i];
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i])
			{
				if (str[i] != to_find[j])
					break ;
				i++;
				j++;
			}
			if (checkcharacter(&str[i], &to_find[j], location, counter) == 1)
				return (location);
		}
		i++;
		counter = 1;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*location;

	if (!to_find[0])
		return (str);
	location = actual_strstr(str, to_find, 0, 0);
	return (location);
}
