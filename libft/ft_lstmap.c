/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 23:25:21 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/27 09:42:10 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_content(void *content, size_t size)
{
	(void) size;
	free(content);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*mapped_node;
	t_list	*start;
	t_list	**last_next_field;

	start = NULL;
	last_next_field = &start;
	while (lst)
	{
		mapped_node = f(lst);
		if (mapped_node == NULL)
		{
			ft_lstdel(&start, free_content);
			return (NULL);
		}
		*last_next_field = mapped_node;
		last_next_field = &(mapped_node->next);
		lst = ft_lstgetnextnode(lst);
	}
	*last_next_field = NULL;
	return (start);
}
