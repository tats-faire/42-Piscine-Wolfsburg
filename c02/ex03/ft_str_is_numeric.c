/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:07:49 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 20:17:16 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	digitonly;

	digitonly = 1;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
		{
			digitonly = 0;
		}
		i++;
	}
	return (digitonly);
}

/* int	main(void)
{
	int		returnvalue;
	char	str[] = {"0009l095715928"};
	returnvalue = ft_str_is_numeric(str);
	printf("%d\n", returnvalue);
	return (0);
} */
