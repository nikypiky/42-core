/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:03:01 by nik               #+#    #+#             */
/*   Updated: 2023/09/06 22:20:22 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_nbr(int nbr)
{
	int	str;

	str = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		str++;
	while (nbr)
	{
		nbr /= 10;
		str++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	nbr;
	unsigned int	str;

	str = digit_nbr(n);
	string = (char *)malloc(sizeof(char) * (str + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr == 0)
		string[0] = '0';
	string[str] = '\0';
	while (nbr != 0)
	{
		string[str - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		str--;
	}
	return (string);
}
