/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:07:46 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/16 23:33:02 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1) - 1;
	while (len != 0 && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr((char *)s1, 0, len + 1));
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s",ft_strtrim("  saad  ",NULL));

// }