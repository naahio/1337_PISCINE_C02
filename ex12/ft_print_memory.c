/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:04:47 by mbabela           #+#    #+#             */
/*   Updated: 2021/06/28 11:34:48 by mbabela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	c;

	if (size == 0)
		return (NULL);
	while (addr[i] != '\0')
	{
		c = "0123456789ABCDEF"[addr[i] / 16];
		ft_putchar(c);
		if (i % 2 == 0)
			ft_putchar(' ');
		i++;
	}
	return (addr);
}
