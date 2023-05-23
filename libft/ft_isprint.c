/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:57:50 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:57:51 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
