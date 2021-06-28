/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 08:10:57 by mbabela           #+#    #+#             */
/*   Updated: 2021/06/28 08:39:42 by mbabela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	change_to_upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (str[i - 1] < '0')
		{
			return (1);
		}
		if ((str[i - 1] > '9' && str[i - 1] < 'A') || (str[i - 1] > 'Z'
				&& str[i - 1] < 'a') || str[i - 1] > 'z')
		{
			return (1);
		}
	}
	return (0);
}

int	change_to_lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (change_to_lowcase(str, i))
			str[i] += 32;
		if ((str[i] < 'a' && str[i] > 'z') && (str[i - 1] < '0'
				&& str[i - 1] > '9'))
			i++;
		if (change_to_upcase(str, i))
			str[i] -= 32;
		i++;
	}
	return (str);
}
