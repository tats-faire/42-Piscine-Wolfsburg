/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilliam <awilliam@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:27:32 by ibellash          #+#    #+#             */
/*   Updated: 2022/11/27 19:35:09 by awilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		make_num(char *str, int index);
int		ft_clean_arr(char *str, char *str1, int i);

char	*ft_atoi(char *str, int i, int j)
{
	char	*str1;

	str1 = malloc(11);
	i = ft_clean_arr(str, str1, 0);
	if (i == -1)
		return (str1);
	while (str[i] == '0' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9' && j < 12)
	{
		str1[j] = str[i];
		j++;
		i++;
		if (j > 10)
			str1[0] = 'E';
	}
	str1[j] = '\0';
	if (make_num(str1, 0) == 0)
		str1[0] = 'E';
	return (str1);
}

int	ft_clean_arr(char *str, char *str1, int i)
{
	while (str[i] < '0' || str[i] > '9')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] < '0' || str[i] > '9')
		{
			str1[0] = 'E';
			return (-1);
		}
		i++;
	}
	return (i);
}

int	make_num(char *str, int index)
{
	long int	num;
	int			mult;
	long int	add;
	int			i;

	mult = 1;
	num = 0;
	i = ft_strlen(str) - 1;
	while (i >= index)
	{
		add = str[i] - 48;
		add *= mult;
		num += add;
		mult *= 10;
		i--;
	}
	if (num > 4294967295)
		return (0);
	return (1);
}
