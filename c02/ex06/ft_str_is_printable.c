/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:41:31 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 22:58:46 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

int	ft_str_is_printable(char *str)
{
	int	onlyprintable;
	int	i;

	onlyprintable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 127)))
		{
			onlyprintable = 0;
		}
		i++;
	}
	return (onlyprintable);
}

/* int main(void)
{
	char str[] = {'\v', 'A'};

	char result = (ft_str_is_printable(str) + '0');
	write (1, &result, 1);
	return (0);
} */
