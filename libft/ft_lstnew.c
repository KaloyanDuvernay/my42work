/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:33:29 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 22:37:57 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list_ptr;

	list_ptr = (t_list *) malloc(sizeof(t_list));
	if (list_ptr == NULL)
		return (NULL);
	list_ptr->content = (void *) content;
	if (content == NULL)
		list_ptr->content_size = 0;
	else
		list_ptr->content_size = content_size;
	list_ptr->next = NULL;
	return (list_ptr);
}
