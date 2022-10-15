/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:25:10 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/10 00:08:58 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	p = malloc(count * size);
	if (!(p))
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
