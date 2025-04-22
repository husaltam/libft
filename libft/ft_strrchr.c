/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <haltamim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:40:25 by haltamim          #+#    #+#             */
/*   Updated: 2024/12/01 18:11:07 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*last_occurrence;

	ch = (char)c;
	last_occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			last_occurrence = s;
		s++;
	}
	if (*s == ch)
		last_occurrence = s;
	return ((char *)last_occurrence);
}
