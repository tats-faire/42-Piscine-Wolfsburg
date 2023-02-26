/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:41:27 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/21 16:04:54 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* int	main(void)
{
	int a;
	int b;
	a = 1;
	b = 20;
	//helpera[0] = &a;
	//helperb[0] = &b;

	//ft_swap(helpera[0], helperb[0]);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
} */
