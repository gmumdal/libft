/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:15:23 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/05 23:23:49 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	const char	*str_s;

	count = 0;
	str_s = s;
	while (count < n)
	{
		if (str_s[count] == (char)c)
			return ((void *)&s[count]);
		count++;
	}
	return (0);
}
