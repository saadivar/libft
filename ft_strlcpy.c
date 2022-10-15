/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:41:37 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/11 02:33:02 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if ((!src || !dst) && !dstsize)
		return (0);
	while (src[len])
		len++;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (len);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char *a= (char *) malloc (5);
	char b[] ="saad";

	char *c=(char *) malloc (5);
	
	printf("%zu \n",ft_strlcpy(a,b,10));
	printf("%s \n",a);

	printf("%zu \n",strlcpy(c,b,10));
	printf("%s \n",c);
	
}*/
