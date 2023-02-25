/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:05:08 by thetzel           #+#    #+#             */
/*   Updated: 2023/02/25 17:04:58 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *base);
int	convertfrombase(char *str, char *base, int i);
int	no_match_checker(char *str, char *base, int i);
int	errorchecker(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	convertfrombase(char *str, char *base, int i)
{
	int	result;
	int	len;
	int	j;

	result = 0;
	len = ft_strlen(base);
	while (str[i])
	{
		j = 0;
		result *= len;
		while (str[i] != base[j])
			j++;
		result += j;
		i++;
	}
	return (result);
}

int	no_match_checker(char *str, char *base, int i)
{
	int	j;
	int	l_str;
	int	alltrue;

	alltrue = 0;
	l_str = (ft_strlen(str) - i);
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
			{
				alltrue++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (alltrue == l_str)
		return (0);
	else
		return (1);
}

int	errorchecker(char *base)
{
	int	doublechecker;
	int	i;

	i = 0;
	while (base[i])
	{
		if ((base[i] <= 32) || (base[i] == 43) || (base[i] == 45)
			|| (base[i] == 127))
			return (1);
		doublechecker = i + 1;
		while (base[doublechecker])
		{
			if (base[doublechecker] == base[i])
				return (1);
			doublechecker++;
		}
		i++;
	}
	if (i <= 1 || base[0] == '\0')
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	pos_neg;
	int	i;

	pos_neg = 1;
	i = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			pos_neg *= -1;
		i++;
	}
	if (errorchecker(base) || no_match_checker(str, base, i))
		return (0);
	return (convertfrombase(str, base, i) * pos_neg);
}

/* int main(void)
{
	char str[] = "   -ooo";
	char base[] = "poneyvif";
	int n = ft_atoi_base(str, base);
	printf("%i", n);
} */
