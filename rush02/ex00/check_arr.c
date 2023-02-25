/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilliam <awilliam@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:32:33 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 16:37:04 by awilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	check_arr(char **arr, char *str)
{
	int		check;
	int		i;

	i = 0;
	check = 1;
	while (arr[i])
	{
		if (arr[i][0] != 'N')
		{
			if (!(ft_strstr(str, arr[i])))
				check = 0;
		}
		i++;
	}
	return (check);
}
