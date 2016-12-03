/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:26:10 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/03 13:26:13 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{
	char	s;

	if (n < 0)
		s = 'N';
	else
		s = 'P';
	ft_putchar(s);
}