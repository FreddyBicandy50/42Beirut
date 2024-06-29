/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:37:11 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/29 18:35:59 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_strlen(const char *str);

void	ft_putnbr_hex(unsigned int num, int isupper);
int		ft_putstr_fd(char *s, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int nbr, int fd, size_t count);
int		ft_u_putnbr_fd(unsigned int nbr, int fd, size_t count);

char	ft_toupper(unsigned char get_chars);
// char	*ft_itoa(int n);
// char	*ft_itoa_u(unsigned int n);
#endif
