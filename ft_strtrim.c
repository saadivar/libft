/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:07:46 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/13 23:50:42 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	if (!s1 || !set)
		return (0);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1) - 1;
	while (size != 0 && ft_strchr(set, s1[size]))
		size--;
	return (ft_substr((char *)s1, 0, size + 1));
}
