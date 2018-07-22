/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: swdenis <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 04:40:18 by swdenis      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 04:44:46 by swdenis     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_op.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *ptr;
	char *ptr2;

	ptr = *dst;
	ptr2 = (char *)src;
	while (0 < n--)
		*ptr++ = *ptr2++;
	return(dst);
}
