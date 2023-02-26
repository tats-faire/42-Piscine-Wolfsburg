/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:33:09 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 22:49:58 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main (void)
{
	char source[] = {"Hello World"};
	char destination[12];
	char *dest_pt = ft_strcpy(destination, source);

	ft_strcpy(destination, source);
	printf("%s\n", destination);
	printf("%s\n", dest_pt);
	return (0);
} */
