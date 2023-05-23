/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:59:59 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:59:59 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int				ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
