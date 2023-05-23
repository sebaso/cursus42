/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:58:05 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:58:06 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') ||
	(c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
