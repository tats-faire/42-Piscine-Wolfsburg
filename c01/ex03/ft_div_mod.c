/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thetzel <thetzel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:47:42 by thetzel           #+#    #+#             */
/*   Updated: 2022/11/22 12:42:49 by thetzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}

/* int main (void)
{
	int div;
	int mod;
	int a;
	int b;

	a = 10;
	b = 3;
	ft_div_mod (a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
} */