/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:52:50 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/11 01:55:12 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < size && dest[j] != '\0')
	{
		j++;
	}
	if (j - 1 == size)
		return (ft_strlen(src) + j);
	while (src[i] != '\0' && size > (i + j + 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j < size)
		dest[j + i] = '\0';
	return (j + ft_strlen(src));
}
/*#include <string.h>
#include <stdio.h>
int main()
{
    char a[80]="saad";
    char b[]="biyyadi";
    printf("%zu \n",ft_strlcat(a,b,80));
    printf("%s\n",a);
    char a1[80]="saad";
    printf("%zu \n",strlcat(a1,b,80));
    printf("%s",a1);
    
}*/
