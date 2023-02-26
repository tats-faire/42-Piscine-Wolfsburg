/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awilliam <awilliam@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:39:14 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 23:12:21 by awilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_atoi(char *str, int i, int j);
char	*ft_strstr(char *str, char *to_find);
void	print_str(char	*str, int last);
char	**make_arr(char	*num, int counter);
int		ft_strlen(char *str);
void	print_arr(char **arr, char *str);
char	*make_str(int len, char *dictionary);
void	main_2(char *num, int argc, char **argv);

int	main(int argc, char *argv[])
{
	char	*num;

	if (argc != 2 && argc != 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	num = ft_atoi(argv[argc - 1], 0, 0);
	if (!num || num[0] == 'E')
	{
		free (num);
		write(1, "Error\n", 6);
		return (0);
	}
	main_2(num, argc, argv);
	write (1, "\n", 1);
	free(num);
	return (0);
}

void	main_2(char *num, int argc, char **argv)
{
	char	*str;
	char	**arr;

	if (argc == 3)
		str = make_str(2000, argv[1]);
	else
		str = make_str(2000, "numbers.dict");
	if (!str)
	{
		write (1, "Invalid dict name", 18);
		return ;
	}
	if (ft_strlen(num) == 1)
	{
		if (!ft_strstr(str, num))
			write (1, "Dict Error", 11);
		else
			print_str(ft_strstr(str, num), 1);
		free (str);
	}
	else
	{
		arr = make_arr(num, 0);
		print_arr(arr, str);
	}
}
