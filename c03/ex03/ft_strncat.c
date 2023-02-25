/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:01:15 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 19:57:40 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && (nb > 0))
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
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

	ft_strncat(dest, src, 0);
	strncat(testdest, testsrc, 0);
	printf("%s ", dest);
	printf("%s", testdest);
} */