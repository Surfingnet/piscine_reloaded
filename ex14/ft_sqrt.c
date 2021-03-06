/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:52:30 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/05 10:48:38 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while ((sqrt * sqrt) < nb)
		sqrt++;
	return (((sqrt * sqrt) == nb) ? sqrt : 0);
}
