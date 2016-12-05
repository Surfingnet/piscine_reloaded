/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:25:27 by mghazari          #+#    #+#             */
/*   Updated: 2016/12/05 10:52:56 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	argn;

	if (argc < 2)
		return (0);
	argn = 0;
	while (++argn < argc)
	{
		while (*argv[argn] != '\0')
			ft_putchar(*(argv[argn]++));
		ft_putchar('\n');
	}
	return (0);
}
