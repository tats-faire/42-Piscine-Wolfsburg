/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:15:37 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 19:57:26 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void)
{
	char testsrc[] = {" World"};
	char testdest[12] = {"Hello"};
	char src[] = {" World"};
	char dest[12] = {"Hello"};

	ft_strcat(dest, src);
	strcat(testdest, testsrc);
	printf("%s ", dest);
	printf("%s", testdest);
} */