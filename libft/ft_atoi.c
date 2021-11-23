/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:00:45 by qbonvin           #+#    #+#             */
/*   Updated: 2021/11/10 14:52:56 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	main(void)
{
	char	str[] = "-664646464646464646";
	int 	val;
	val = ft_atoi(str);
	printf("%d", val);
}*/

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
	{
		index++;
	}
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10 + str[index] - '0';
		index++;
	}
	return (res * sign);
}
