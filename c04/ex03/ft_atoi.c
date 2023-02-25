/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:15:06 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/30 18:01:14 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	neg_pos;
	int	number;

	i = 0;
	n = 0;
	neg_pos = 1;
	number = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg_pos = neg_pos * (-1);
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9') && str[i])
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	number = number * neg_pos;
	return (number);
}

/* int main(void)
{
	char test[] = "---+--+1234ab567";
	int result = ft_atoi(test);
	printf("%i", result);
} */