/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:51:51 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/11 02:37:49 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle && len == 0)
		return (0);
	if (!*needle || len == 0)
		return ((char *)haystack);
	while (*haystack && len >= ft_strlen(needle))
	{
		if (*haystack == *needle
			&& !ft_memcmp(haystack, needle, ft_strlen(needle)))
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
   
    char a[] = "aaabcabcd";
     char b[] = "aabc";
    printf("%s",(ft_strnstr(a , b, -1)));
}*/
