/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:05:17 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 22:58:42 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

/* int main(void)
{
	char str[] = {"gg fawG.f_nafl()"};
	char *output = ft_strupcase(str);
	write (1, output, 16);
	return (0);
} */
