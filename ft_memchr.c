/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:12:30 by afernan2          #+#    #+#             */
/*   Updated: 2022/09/26 15:15:07 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *f, int c, size_t n)
{
	int		i;
	char	*s;
	char	a;

	i = 0;
	s = (char *)f;
	a = (char)c;
	while (n > 0)
	{
		if (s[i] == a)
			return (&s[i]);
		i++;
		n--;
	}
	return (NULL);
}
