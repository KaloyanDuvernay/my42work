/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:17:43 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 20:58:49 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_words(char *str, char sep)
{
	int	waiting_new_word;
	int	count;

	waiting_new_word = 1;
	count = 0;
	while (*str)
	{
		if (waiting_new_word && *str != sep)
		{
			waiting_new_word = 0;
			count++;
		}
		if (*str == sep)
			waiting_new_word = 1;
		str++;
	}
	return (count);
}

char	*find_next_start(char *str, char sep)
{
	while (*str == sep)
	{
		str++;
	}
	return (str);
}

char	*find_next_end(char *str, char sep)
{
	while (*str != sep && *str != '\0')
	{
		str++;
	}
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**result;
	char	**result_start;
	char	*str_ptr;
	char	*word_end;

	str_ptr = (char *) s;
	nb_words = ft_nb_words((char *) s, c);
	result = (char **) malloc(sizeof(char *) * (nb_words + 1));
	result_start = result;
	if (result == NULL)
		return (NULL);
	while (nb_words--)
	{
		str_ptr = find_next_start(str_ptr, c);
		word_end = find_next_end(str_ptr, c);
		*result = ft_strndup(str_ptr, word_end - str_ptr);
		if (!*result)
			return (free(result), NULL);
		str_ptr = word_end;
		result++;
	}
	*result = NULL;
	return (result_start);
}
