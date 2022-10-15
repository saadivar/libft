/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:11:49 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/10 00:43:24 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>*/
/*int main()
{
    char a[]="saad";
    char b = 'b';
    ft_memset(a,b,4);
    printf("%s",a);
    
}*/
