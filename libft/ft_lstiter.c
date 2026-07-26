/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 23:13:10 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 23:51:11 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current_node;

	current_node = lst;
	if (current_node != NULL)
		f(current_node);
	else
		return ;
	while (ft_lstgetnextnode(current_node))
	{
		current_node = ft_lstgetnextnode(current_node);
		f(current_node);
	}
}
