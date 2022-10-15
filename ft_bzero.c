/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bezero.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-biyy <sel-biyy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:27:48 by sel-biyy          #+#    #+#             */
/*   Updated: 2022/10/10 00:07:15 by sel-biyy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="saad";
    ft_bzero(a+1,2);
    printf("%s",a);
    
}*/
