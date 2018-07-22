/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: swdenis <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 04:39:41 by swdenis      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 04:39:44 by swdenis     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */



#include "ft_op.h"

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	num = 0;
	neg = 0;
	i = 0;
	while (((str[i] == 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		neg = 1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num *= 10;
		num += (int)str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}
