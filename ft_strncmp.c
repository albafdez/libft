/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:27:06 by afernan2          #+#    #+#             */
/*   Updated: 2022/09/26 16:42:43 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				r;

	i = 0;
	r = 0;
	while ((i < n) && !r && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !r && (s1[i] == '\0' || s2[i] == '\0'))
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (r);
}
