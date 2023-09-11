/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:01:18 by nik               #+#    #+#             */
/*   Updated: 2023/09/12 00:35:15 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	putnbr_digit_nbr(int nbr)
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

void	ft_putnbr_fd(int n, int fd)
{
	char			string[11];
	unsigned int	nbr;
	unsigned int	str;

	str = putnbr_digit_nbr(n);
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
	write(fd, string, ft_strlen(string));
}

//int	digit_nbr(int nbr)
//{
//	int	i;
//	int	j;

//	i = 1;
//	j = 0;
//	while (nbr / i)
//	{
//		i *= 10;
//		j++;
//	}
//	return (j);
//}

//void	ft_putnbr_fd(int n, int fd)
//{
//	char	str[10];
//	int		i;

//	i = digit_nbr(n);
//	str[i + 1] = 0;
//	if (n < 0)
//	{
//		str[0] = '-';
//		i++;
//		n = -n;
//	}
//	while (n != 0)
//	{
//		str[i] = (n % 10) + '0';
//		n = n / 10;
//		i--;
//	}
//	write(fd, str, ft_strlen(str));
//}
