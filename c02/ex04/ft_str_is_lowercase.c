/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:12:31 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 20:17:55 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lwalphaonly;

	lwalphaonly = 1;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
		{
			lwalphaonly = 0;
		}
		i++;
	}
	return (lwalphaonly);
}

/* int	main(void)
{
	int		returnvalue;
	char	str[] = {"oofLhdfhddh"};
	returnvalue = ft_str_is_lowercase(str);
	printf("%d\n", returnvalue);
	return (0);
} */
