/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 23:25:21 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 23:46:09 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current_node;
	t_list	*mapped_node;
	t_list	*start;
	void	*previous_next_ptr;

	current_node = lst;
	if (current_node != NULL)
	{
		mapped_node = f(current_node);
		previous_next_ptr = mapped_node->next;
		start = mapped_node;
	}
	else
		return NULL;
	while((current_node = ft_lstgetnextnode(current_node)))
	{
		if (current_node != NULL)
		{
			mapped_node = f(current_node);
			if (mapped_node == NULL)
			{
				ft_lstdel(start, ft_lstdelone);
				return (NULL);
			}
			previous_next_ptr = mapped_node;
			
		}
		else
		{
			previous_next_ptr = NULL;
		}
	}
	return (start);
}
