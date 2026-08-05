/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:04:18 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/05 12:04:19 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    if (!dest && !src)
        return NULL;
  
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    while (n > 0)
    {
        *d++ = *s++;
        n--;
    }
    return (dest);
}
