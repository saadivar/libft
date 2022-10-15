/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:03:23 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/11 02:48:29 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((char *)dst == (char *)src || !len)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int main () 
{
   char dest[] = "abcdefghijklm";
   //const char src[]  = "saad";
   char dest1[] = "abcdefghijklm";
   //const char src1[] = "saad";
   

   //printf("Before ft_memmove dest = %s, src = %s\n", dest, dest);
   memmove(dest + 3, dest,4);
   printf("%s \n", dest);
   //printf("Before memmove dest = %s, src = %s\n", dest1, dest1);
   ft_memmove(dest1 + 3, dest1,4);
   printf("%s \n", dest1);
   

   return(0);
}*/
