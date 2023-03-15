/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:07:02 by afernan2          #+#    #+#             */
/*   Updated: 2023/03/15 14:07:05 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_many_nbr(long int n)
{
	size_t	i;

	i = 0;
	if (n == 0 || n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	mn;
	long int	nbr;
	char		*dst;

	i = 0;
	nbr = n;
	mn = ft_many_nbr(nbr);
	dst = malloc(sizeof(char) * (mn + 1));
	if (!dst)
		return (0);
	if (n < 0)
	{
		nbr = -nbr;
		dst[0] = '-';
		i++;
	}
	dst[mn] = '\0';
	while (mn > i)
	{
		dst[mn - 1] = nbr % 10 + '0';
		nbr /= 10;
		mn--;
	}
	return (dst);
}
