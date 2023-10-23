/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:34:23 by rcarvalh          #+#    #+#             */
/*   Updated: 2023/10/23 13:35:50 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	counter;
	size_t	counter2;

	counter = 0;
	counter2 = 0;
	while (s1[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			return (*(unsigned char *)(s1 + counter) -
					*(unsigned char *)(s2 + counter));
		}
		counter++;
	}
	while (s2[counter2] != '\0')
		counter2++;
	if (counter > counter2)
		return (1);
	if (counter < counter2)
		return (-1);
	return (0);
}
