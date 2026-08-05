/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:36:20 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/05 17:12:13 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fcntl.h"
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
int main(void)
{
    int fd;
    fd = open("a.txt",O_WRONLY);
    ft_putchar_fd('c', fd);
    close(fd);
    
    
}