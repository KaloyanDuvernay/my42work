/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:17:43 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/08 12:35:00 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

static void	ft_free_split(char **result, size_t count)
{
	while (count > 0)
	{
		count--;
		free(result[count]);
	}
	free(result);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static int	ft_fill_split(char **result, char const *s, char c)
{
	size_t	word;
	size_t	len;

	word = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		len = ft_word_len(s, c);
		result[word] = ft_substr(s, 0, len);
		if (result[word] == NULL)
		{
			ft_free_split(result, word);
			return (0);
		}
		word++;
		s += len;
	}
	result[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	count = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	if (!ft_fill_split(result, s, c))
		return (NULL);
	return (result);
}
