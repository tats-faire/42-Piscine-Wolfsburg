/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:15:23 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 20:18:24 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	uppletter;

	uppletter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			uppletter = 0;
		}
		i++;
	}
	return (uppletter);
}

/* int	main(void)
{
	char	str[] = {"HELL0WORLD"};
	char	result;

	result = (ft_str_is_uppercase(str) + '0');
	write(1, &result, 1);
	return (0);
} */
