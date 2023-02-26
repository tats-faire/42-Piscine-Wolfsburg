/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:52:45 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 22:58:57 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alphaonly;

	alphaonly = 1;
	i = 0;
	while (str[i])
	{
		if (!(((str[i] >= 'a') && (str[i] <= 'z'))
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
		{
			alphaonly = 0;
		}
		i++;
	}
	return (alphaonly);
}

/* int	main(void)
{
	int		returnvalue;
	char	str[] = {"WobWobWob"};
	returnvalue = ft_str_is_alpha(str);
	printf("%d\n", returnvalue);
	return (0);
} */
