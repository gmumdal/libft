/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:53:13 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/05 12:49:41 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*str_dst;
	const char	*str_src;

	str_dst = dst;
	str_src = src;
	count = 0;
	while (count < n)
	{
		str_dst[count] = str_src[count];
		count++;
	}
	return (dst);
}
