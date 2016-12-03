/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:44:55 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/03 15:43:15 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	array_pass(int len, char *array[])
{
	int		i;
	int		ok;
	char	*tmp;

	i = 0;
	ok = 1;
	while (++i < (len - 1))
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			ok = 0;
		}
	}
	return (ok);
}

int	print_params(int argc, char *argv[])
{
	int	argn;

	argn = 0;
	while (++argn < argc)
	{
		while (*argv[argn] != '\0')
			ft_putchar(*(argv[argn]++));
		ft_putchar('\n');
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	if (argc > 2)
		while (!array_pass(argc, argv))
			continue;
	return (print_params(argc, argv));
}
