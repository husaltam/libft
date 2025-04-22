/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltamim <haltamim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:00:29 by haltamim          #+#    #+#             */
/*   Updated: 2024/12/03 21:08:29 by haltamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **bye)
{
	int	i;

	i = 0;
	if (!bye)
		return (NULL);
	while (bye[i])
	{
		free(bye[i]);
		i++;
	}
	free(bye);
	return (NULL);
}

static size_t	ft_count_strings(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == sep))
			i++;
		if (str[i])
			count++;
		while (str[i] && !(str[i] == sep))
			i++;
	}
	return (count);
}

static void	ft_get_next_word(char **next_word, size_t *next_word_len, char c)
{
	size_t	i;

	*next_word += *next_word_len;
	*next_word_len = 0;
	i = 0;
	while (**next_word && **next_word == c)
		(*next_word)++;
	while ((*next_word)[i])
	{
		if ((*next_word)[i] == c)
			return ;
		(*next_word_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*next_word;
	size_t	next_word_len;
	size_t	i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_count_strings(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	next_word = (char *)s;
	next_word_len = 0;
	while (i < ft_count_strings(s, c))
	{
		ft_get_next_word(&next_word, &next_word_len, c);
		res[i] = (char *)malloc(sizeof(char) * (next_word_len + 1));
		if (!res[i])
			return (ft_free(res));
		ft_strlcpy(res[i], next_word, next_word_len + 1);
		i++;
	}
	res[i] = NULL;
	return (res);
}
