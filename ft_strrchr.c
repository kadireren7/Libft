/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:04:42 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/05 12:04:43 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    if (s[0] == (char)c)
        return ((char *)&s[0]);
    return (NULL);
}
