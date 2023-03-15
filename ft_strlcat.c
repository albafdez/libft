/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:33:02 by afernan2          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:36 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;
	char	*s;

	i = 0;
	s = (char *)src;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (size < lend + 1)
		return (lens + size);
	while (s[i] && i < (size - lend - 1))
	{
		dst[i + lend] = src[i];
		i++;
	}
	dst[i + lend] = '\0';
	return (lend + lens);
}
