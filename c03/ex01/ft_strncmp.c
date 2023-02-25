/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:41:31 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/29 17:56:36 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i]) && (s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/* int main(void)
{
	char s1[] = {"h"};
	char s2[] = {"f"};
	unsigned int n = 3;
	int result = ft_strncmp(s1, s2, n);
	int test = strncmp(s1, s2, n);

	printf("%i ", test);
	printf("%i", result);
} */
