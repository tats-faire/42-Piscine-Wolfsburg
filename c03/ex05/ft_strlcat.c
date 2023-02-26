/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:34:14 by thetzel           #+#    #+#             */
/*   Updated: 2023/02/25 16:33:56 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_d;

	i = 0;
	length_d = ft_strlen(dest);
	if (size <= length_d || size == 0)
		return (size + (ft_strlen(src)));
	while ((src[i] != '\0') && (i < size - 1 - length_d))
	{
		dest[length_d + i] = src[i];
		i++;
	}
	dest[i + length_d] = '\0';
	return (ft_strlen(src) + length_d);
}

/* int main(void)
{
	char testsrc[] = {"5q526"};
	char testdest[15] = {""};
	char src[] = {"5q526"};
	char dest[15] = {""};
	unsigned int len = ft_strlcat(dest, src, 14);
	unsigned int testlen = strlcat(testdest, testsrc, 14);

	printf("%sd ", dest);
	printf("%il ", len);
	printf("%sd ", testdest);
	printf("%il ", testlen);
} */
