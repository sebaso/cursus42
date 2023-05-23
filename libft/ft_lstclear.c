/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:58:39 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:58:39 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}
