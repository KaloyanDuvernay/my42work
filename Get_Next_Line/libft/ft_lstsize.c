/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 13:28:28 by kaloyanduve       #+#    #+#             */
/*   Updated: 2026/10/08 13:41:03 by kaloyanduve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	if (lst == NULL)
		return (0);
	count = 1;
	lst = ft_lstgetnextnode(lst);
	while (lst != NULL)
	{
		count++;
		lst = ft_lstgetnextnode(lst);
	}
	return (count);
}
