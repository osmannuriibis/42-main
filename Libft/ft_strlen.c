/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 02:32:46 by oibis             #+#    #+#             */
/*   Updated: 2022/02/02 02:32:46 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


size_t	ft_strlen(char *str)
{
	char *s;

	s = str;
	while (*(s++) != 0);
	return (s - str);  
}