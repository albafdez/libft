/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:25:31 by afernan2          #+#    #+#             */
/*   Updated: 2022/09/27 18:35:44 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!src && !dst)
		return (0);
	if (src > dst)
	{	
		while (len > 0)
		{
			d[i] = s[i];
			i++;
			len--;
		}
	}
	i = len - 1;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dst);
}
