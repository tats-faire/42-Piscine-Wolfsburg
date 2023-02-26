/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:02:41 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 19:02:52 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	**case_one(char **arr, char *num, int counter, int len);
char	**case_two(char **arr, int len, int j);
char	**case_three(char **arr, char *num, int counter, int len);

int		g_i;

char	**make_arr(char *num, int counter)
{
	int		len;
	char	**arr;

	g_i = 0;
	len = ft_strlen(num);
	arr = malloc((8 * (len + 10)) + 1);
	while (len > 0)
	{
		if (len % 3 == 1)
			case_one(arr, num, counter, len);
		else if (num[counter] == '0')
		{
			arr[g_i] = malloc(2);
			arr[g_i][0] = 'N';
			arr[g_i][1] = '\0';
		}
		else
			case_three(arr, num, counter, len);
		g_i++;
		counter++;
		len--;
	}
	arr[g_i] = 0;
	return (arr);
}

char	**case_three(char **arr, char *num, int counter, int len)
{
	if (len % 3 == 2)
	{
		arr[g_i] = malloc(3);
		arr[g_i][0] = num[counter];
		if (num[counter] == '1')
			arr[g_i][1] = num[counter + 1];
		else
			arr[g_i][1] = '0';
		arr[g_i][2] = '\0';
	}
	else if (len % 3 == 0)
	{
		arr[g_i] = malloc(2);
		arr[g_i][0] = num[counter];
		arr[g_i][1] = '\0';
		g_i++;
		arr[g_i] = malloc(4);
		arr[g_i][0] = '1';
		arr[g_i][1] = '0';
		arr[g_i][2] = '0';
		arr[g_i][3] = '\0';
	}
	return (arr);
}

char	**case_one(char **arr, char *num, int counter, int len)
{
	if (num[counter] != '0' && num[counter - 1] != '1')
	{
		arr[g_i] = malloc(2);
		arr[g_i][0] = num[counter];
		arr[g_i][1] = '\0';
		if (len > 1)
			g_i++;
	}
	if (len > 1)
	{
		if (num[counter] != '0' || num[counter - 1] != '0'
			|| num[counter - 2] != '0')
			case_two(arr, len, 1);
		else
		{
			arr[g_i] = malloc(2);
			arr[g_i][0] = 'N';
			arr[g_i][1] = '\0';
		}
	}
	return (arr);
}

char	**case_two(char **arr, int len, int j)
{
	arr[g_i] = malloc(len + 1);
	arr[g_i][0] = '1';
	j = 1;
	while (j < len)
	{
		arr[g_i][j] = '0';
		j++;
	}
	arr[g_i][j] = '\0';
	return (arr);
}
