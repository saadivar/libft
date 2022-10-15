/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:42:21 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/10 00:41:44 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*((unsigned char *)s1) - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
    char q[]="";
    char a[]="";
    char c[]="";
    char b[]="";
    //printf("%d \n",ft_memcmp(q,a,10));
    printf("%d \n",memcmp(c,b,10));
}*/
