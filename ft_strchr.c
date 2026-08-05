/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:04:25 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/05 12:04:26 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char    j;

    j = (char) c;
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == j)
            return ((char *) & s[i]);
        i++;
    }
    if (s[i] == j)
        return ((char *) & s[i]);
    return (NULL);
}
