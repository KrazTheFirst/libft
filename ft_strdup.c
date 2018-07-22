/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: swdenis <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 04:42:31 by swdenis      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 04:42:33 by swdenis     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_op.h"

char	*ft_strdup(char *s1)
{
	char *ptr;

	if((ptr =(char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == NULL)
		return(NULL);
		ptr = ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
		return(ptr);
}
