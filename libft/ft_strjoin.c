/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <haltamim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:52:26 by haltamim          #+#    #+#             */
/*   Updated: 2024/12/01 18:10:44 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	dst_len;
	size_t	src_len;
	char	*result;
	char	*string;

	dst_len = ft_strlen(s1);
	src_len = ft_strlen(s2);
	result = (char *)malloc(dst_len + src_len + 1);
	string = result;
	if (!result)
		return (NULL);
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (string);
}

/*int	main(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = "World!";
	printf("%s", ft_strjoin(s1, s2));
}*/
