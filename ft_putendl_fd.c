/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 19:15:34 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/07 14:57:37 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    write (fd, &s, 1);
    write (fd, "\n", 1);
}
int main(void) 
{
    int fd;
    fd = open("a",O_CREAT, O_WRONLY);
    ft_putendl_fd("ab", fd);
    close(fd);
}