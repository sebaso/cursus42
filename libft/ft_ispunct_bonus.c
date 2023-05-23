/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:57:54 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:57:54 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) ||
		(c >= 123 && c <= 126))
		return (1);
	return (0);
}