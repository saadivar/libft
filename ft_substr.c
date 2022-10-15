/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:26:29 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/14 21:06:51 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	if (!s)
		return (0);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!(p))
		return (NULL);
	while (s[start + i] && i < len && start < ft_strlen(s))
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// #include <stdio.h>
// int main()
// {
//     char * s = "tripouille";
//     printf("%s",ft_substr(s, strlen("tripouille") , 1));
//     return(0);
// }