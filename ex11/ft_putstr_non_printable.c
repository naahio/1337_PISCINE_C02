/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:34:12 by mbabela           #+#    #+#             */
/*   Updated: 2021/06/28 10:49:00 by mbabela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (*str != '\n')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= ' ' && str[i] <= 127 )
			{
				c = str[i];
				write(1, &c, 1);
			}
			else
			{
				c = "0123456789ABCDEF"[str[i] / 16];
				write(1, '\\', 1);
				write(1, &c, 1);
			}
			i++;
		}
	}
}
