/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:20:12 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/15 01:12:33 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	tot;

	sign = 1;
	tot = 0;
	while (*str == 9 || *str == 10 || *str == 11
		|| *str == 12 || *str == 13 || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		tot = tot * 10 + (*str - 48);
		str++;
		if (tot > LLONG_MAX && sign == 1)
			return (-1);
		if (tot > LLONG_MAX && sign == -1)
			return (0);
	}
	return (tot * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     const char a[] ="2147483646";
//     printf("%d\n%d\n",atoi(a),ft_atoi(a));
//     return(0);
// }
