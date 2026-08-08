/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:51:30 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/07 17:02:32 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    digit;
    
    if (n == -2147483648)
    {
        write (fd, "-2147483648", 11);
        return;
    }
    else if (n < 0)
    {
        write (fd, "-", 1);
        n = -n;
        ft_putnbr_fd(n, fd);
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        digit = n + '0';
        write (fd, &digit, 1);
    }
}

int main (void)
{
    ft_putnbr_fd(98765432, 1);
    return (0);
}