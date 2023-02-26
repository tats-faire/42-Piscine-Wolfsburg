/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:07:56 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/21 19:01:23 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	fta;
	int	ftb;

	fta = *a;
	ftb = *b;
	*a = (fta / ftb);
	*b = (fta % ftb);
}

/* int main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
} */
