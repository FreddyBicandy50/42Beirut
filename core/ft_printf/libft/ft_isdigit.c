/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:46:17 by fbicandy          #+#    #+#             */
/*   Updated: 2024/06/10 14:46:39 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(unsigned char get_chars)
{
	if (get_chars >= '0' && get_chars <= '9')
		return (1);
	return (0);
}
