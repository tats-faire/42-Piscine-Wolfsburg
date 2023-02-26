/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:18:24 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/24 19:03:54 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	check_alphanumeric(char *str, int i)
{
	if (((str[i] >= 'a') && (str[i] <= 'z'))
		|| ((str[i] >= 'A') && (str[i] <= 'Z'))
		|| ((str[i] >= '0') && (str[i] <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (check_alphanumeric(str, i) == 1)
			j = 1;
		while (check_alphanumeric(str, i) == 1)
		{
			if (j == 1 && (str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (j > 1 && (str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			j++;
			i++;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char str[] = {"salut, tu vas ? 42mots quaRante-deux; A +/1"};
	char *output = ft_strcapitalize(str);
	write(1, output, 67);
}
 */
