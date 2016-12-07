/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:48:37 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/07 09:03:33 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ar;

	if (min >= max)
		return (0);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (!ar)
		return (0);
	i = 0;
	while (min < max)
		ar[i++] = min++;
	return (ar);
}
