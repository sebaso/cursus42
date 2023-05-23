/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:55 by solaeche          #+#    #+#             */
/*   Updated: 2023/05/03 14:01:56 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *s2;

	if (!(s2 = (char *)malloc(n + 1)))
		return (0);
	ft_memcpy(s2, s1, n);
	s2[n + 1] = 0;
	return (s2);
}
