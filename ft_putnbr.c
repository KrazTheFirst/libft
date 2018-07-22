/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: swdenis <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 04:41:21 by swdenis      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 04:41:30 by swdenis     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	while (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
}
