/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:12:48 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/10 00:16:57 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0 ;
	while (i < n)
	{
		if (str[i] == ((unsigned char)c))
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
/*
#include<string.h>
#include <stdio.h>
int main()
{
    char c[]="saad";
    char *b;
    b = ft_memchr(c,0,10);
    printf("%s",b);

    printf("%s",memchr(c,0,10));
}*/
