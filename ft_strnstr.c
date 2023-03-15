/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:34:56 by afernan2          #+#    #+#             */
/*   Updated: 2022/10/02 12:18:19 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenn;
	char	*h;

	i = 0;
	h = (char *)haystack;
	lenn = ft_strlen(needle);
	if (lenn == 0 || haystack == needle)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] != '\0' && needle[j] != '\0' \
				&& h[i + j] == needle[j] && i + j < len)
			j++;
		if (j == lenn)
			return (h + i);
		i++;
	}
	return (0);
}
