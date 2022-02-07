/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oibis <oibis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:12:14 by oibis             #+#    #+#             */
/*   Updated: 2022/02/07 18:39:44 by oibis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Standart bilgi girişi stdin için dosya numarası 0, 
standart bilgi çıkışı stdout için dosya numarası 1 
ve hata çıkışı stderr için dosya numarası 2 kullanacaksınız. */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
