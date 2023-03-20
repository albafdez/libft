/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:34:56 by afernan2          #+#    #+#             */
/*   Updated: 2023/03/20 17:38:30 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigger, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenn;
	char	*h;

	i = 0;
	h = (char *)bigger;
	lenn = ft_strlen(little);
	if (lenn == 0 || bigger == little)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] != '\0' && little[j] != '\0' \
				&& h[i + j] == little[j] && i + j < len)
			j++;
		if (j == lenn)
			return (h + i);
		i++;
	}
	return (0);
}
