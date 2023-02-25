/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:06:02 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/29 15:09:22 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lengthsrc;

	i = 0;
	lengthsrc = 0;
	while (src[lengthsrc] != '\0')
	{
		lengthsrc++;
	}
	if (size != 0)
	{
		while ((i < (size - 1)) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (lengthsrc);
}

/* int	main (void)
{
	char source[] = {"12012345678"};
	char destination[12] = {" "};
	char testsrc[] = {"12012345678"};
	char testdest[12] = {" "};
	int output = ft_strlcpy(destination, source, 8);
	int testoutpt = strlcpy(testdest, testsrc, 8);

	printf("%s\n", testdest);
	printf("%i\n", testoutpt);
	printf("%s\n", destination);
	printf("%i\n", output);
	return (0);
} */
