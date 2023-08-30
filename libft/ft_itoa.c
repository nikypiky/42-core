/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:03:01 by nik               #+#    #+#             */
/*   Updated: 2023/08/30 17:03:02 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_negative(int n, int j, char *str)
{
	str[j] = 0;
	str[0] = '-';
	n = -n;
	while (j > 0)
	{
		str[j] = n % 10 + 48;
		n /= 10;
		j--;
	}
	return (str);
}

int	digit_nbr(int nbr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (nbr / i)
	{
		i *= 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;

	if (n == 0)
		return ("0");
	j = digit_nbr(n);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (n < 0)
		return (ft_itoa_negative(n, j, str));
	if (!str)
		return (NULL);
	str[j] = 0;
	while (j >= 0)
	{
		str[j - 1] = n % 10 + 48;
		n /= 10;
		j--;
	}
	return (str);
}
