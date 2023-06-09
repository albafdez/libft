/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afernan2 <afernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:17:19 by afernan2          #+#    #+#             */
/*   Updated: 2022/09/26 19:47:55 by afernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z') \
	|| (d >= '0' && d <= '9'))
		return (1);
	return (0);
}
