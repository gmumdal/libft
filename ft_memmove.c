/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:18:01 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/05 12:40:28 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str_dst;
	const char	*str_src;
	size_t		count;

	str_dst = dst;
	str_src = src;
	if (dst < src)
	{
		count = 0;
		while (count < len)
		{
			str_dst[count] = str_src[count];
			count++;
		}
	}
	else
	{
		count = len;
		while (count-- != 0)
			str_dst[count] = str_src[count];
	}
	return (dst);
}
