/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:57:43 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:57:44 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ft_isgraph(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}