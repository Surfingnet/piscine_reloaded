/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 11:51:05 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/07 11:58:20 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	res;

	res = 0;
	while (**tab != '0')
	{
		if ((*f)(*tab) == 1)
			res++;
		tab++;
	}
	return (res);
}