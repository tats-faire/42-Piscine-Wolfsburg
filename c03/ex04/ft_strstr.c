/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:06:23 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/28 19:58:31 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[j + i] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}

/* int main(void)
{
	char testsrc[] = {"Oh Hello World"};
	char test_to_find[12] = {""};
	char src[] = {"Oh Hello World"};
	char to_find[12] = {""};
	char *output = ft_strstr(src, to_find);
	char *test = strstr(testsrc, test_to_find);

	printf("%s ", output);
	printf("%s", test);
} */
