/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <haltamim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:28:42 by haltamim          #+#    #+#             */
/*   Updated: 2024/12/01 18:10:13 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = str;
	value = (unsigned char)c;
	while (len--)
		*ptr++ = value;
	return (str);
}
