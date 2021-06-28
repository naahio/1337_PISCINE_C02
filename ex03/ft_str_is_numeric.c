/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:04:13 by mbabela           #+#    #+#             */
/*   Updated: 2021/06/27 14:21:21 by mbabela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	istrue;

	i = 0;
	if (*str == '\0' )
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			istrue = 1;
		else
		{
			istrue = 0;
			break ;
		}
		i++;
	}
	return (istrue);
}
