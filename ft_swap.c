/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_swap.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: swdenis <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 21:14:23 by swdenis      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 04:43:25 by swdenis     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_op.h"

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
