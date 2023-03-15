/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:28:06 by afernan2          #+#    #+#             */
/*   Updated: 2022/09/26 16:08:04 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *f, int c)
{
	int		i;
	char	*s;
	char	a;

	i = 0;
	s = (char *)f;
	a = (char)c;
	while (s[i])
	{
		if (s[i] == a)
			return (&s[i]);
		i++;
	}
	if (s[i] == a)
		return (&s[i]);
	return (NULL);
}
