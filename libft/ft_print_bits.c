/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <sferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:49:07 by sferreir          #+#    #+#             */
/*   Updated: 2019/10/10 14:20:48 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_bits(unsigned char octet)
{
	int				oct;
	int				div;

	oct = octet;
	div = 128;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}
