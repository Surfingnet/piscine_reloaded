/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 11:34:52 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/05 13:37:19 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*des;

	len = ft_strlen(src);
	des = malloc(sizeof(char) * (len + 1));
	if (!des)
		return (NULL);
	i = -1;
	while (src[(++i)] != '\0')
		des[i] = src[i];
	return (des);
}
