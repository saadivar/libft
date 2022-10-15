/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:06:16 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/13 22:41:57 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = (ft_strlen(s));
	while (i)
	{
		if (s[i - 1] == (char)c)
			return ((char *)(s + i - 1));
		i--;
	}
	i = (ft_strlen(s));
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}
