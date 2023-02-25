/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:13:47 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 22:58:37 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

/* int main(void)
{
	char str[] = {"AbCdEfGh@"};
	char *output = ft_strlowcase(str);
	write (1, output, 9);
	return (0);
} */
