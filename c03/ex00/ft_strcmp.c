/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:47:53 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 13:05:03 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int main(void)
{
	char s1[] = {" Hellooo"};
	char s2[] = {" Hello"};
	int result = ft_strcmp(s1, s2);
	int test = strcmp(s1, s2);

	printf("%i ", test);
	printf("%i", result);
} */