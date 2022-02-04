/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:32:29 by oibis             #+#    #+#             */
/*   Updated: 2022/02/02 02:32:29 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memset(void *dest, int c, size_t len)
{
    size_t  i;
    unsigned char   *temp;
    
    i = 0;
    temp = (unsigned char *)dest;

    while (i < len)
        temp[i++] = (unsigned char)c;
    return (dest);

}