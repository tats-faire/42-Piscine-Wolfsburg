/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:27:44 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 19:56:44 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ej_realloc(char **buffer, int size);

char	*make_str(int len, char *dictionary)
{
	int		fd;
	char	*str;
	int		new_len;

	fd = open(dictionary, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(len);
	len = read(fd, str, len);
	new_len = len;
	while (len == new_len)
	{
		new_len += len;
		str = ej_realloc(&str, new_len);
		fd = open(dictionary, O_RDONLY);
		len = read(fd, str, new_len);
	}
	close(fd);
	return (str);
}
