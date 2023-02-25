/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ej_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:28:08 by awilliam          #+#    #+#             */
/*   Updated: 2022/11/27 19:55:58 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ej_realloc(char **buffer, int size)
{
	char	*new_buffer;

	new_buffer = malloc(size);
	free (*buffer);
	return (new_buffer);
}
