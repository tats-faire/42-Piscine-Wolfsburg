/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:19:30 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/29 15:10:21 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (n))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int main(void)
{
	char source[] = {"123456789"};
	char destination[11];
	unsigned int n = 4;

	ft_strncpy(destination, source, n);
	printf("%s\n", destination);
	return (0);
} */