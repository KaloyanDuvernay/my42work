/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:51:12 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/07/26 23:53:47 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	next = (*alst)->next;
	ft_lstdelone(alst, del);
	while (next != NULL)
	{
		*alst = (t_list *) next;
		next = (*alst)->next;
		ft_lstdelone(alst, del);
	}
	*alst = NULL;
}
