/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nik <nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:05:32 by nik               #+#    #+#             */
/*   Updated: 2023/09/01 19:41:03 by nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	esc_seq_check(char c)
{
	if (c == '\a')
		return (1);
	if (c == '\b')
		return (1);
	if (c == '\e')
		return (1);
	return (c);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str <= 32)
	{
		if (esc_seq_check(*str) == 1)
			return (0);
		str++;
	}
	if (*str == '-')
	{
		str++;
		sign = -sign;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	return ((result * sign));
}
