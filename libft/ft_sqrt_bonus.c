/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solaeche <solaeche@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:54:33 by apuchill          #+#    #+#             */
/*   Updated: 2023/05/03 13:45:40 by solaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_sqrt(double x)
{
	double	n;

	n = 1;
	if (x > 0)
	{
		while (n * n <= x)
		{
			if (n * n == x)
				return (n);
			n++;
		}
	}
	return (0);
}
