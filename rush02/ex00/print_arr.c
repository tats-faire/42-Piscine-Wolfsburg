/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilliam <awilliam@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:26:19 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 18:50:18 by awilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);
void	print_str(char	*str, int last);
int		check_arr(char **arr, char *str);
int		is_ended(char **arr, int i);

void	print_arr(char **arr, char *str)
{
	int		i;
	char	*ptr;
	int		check;

	check = check_arr(arr, str);
	i = 0;
	while (arr[i])
	{
		if (arr[i][0] != 'N')
		{
			ptr = ft_strstr(str, arr[i]);
			if (check && (arr[i + 1] && is_ended(arr, i + 1) == 0))
				print_str(ptr, 0);
			else if (check && (!arr[i + 1] || is_ended(arr, i + 1) == 1))
				print_str(ptr, 1);
		}
		free(arr[i]);
		i++;
	}
	if (!check)
		write (1, "Dict Error", 11);
	free(arr[i]);
	free(arr);
	free(str);
}

int	is_ended(char **arr, int i)
{
	while (arr[i])
	{
		if (arr[i][0] != 'N')
			return (0);
		i++;
	}
	return (1);
}
