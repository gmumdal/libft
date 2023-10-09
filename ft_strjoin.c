/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:35:12 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/08 12:22:14 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	size_t	index;
	char	*toss;

	if (s1 == 0 || s2 == 0)
		return (0);
	index = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	toss = (char *)ft_calloc(total_len + 1, sizeof(char));
	if (toss == 0)
		return (0);
	while (*s1)
	{
		toss[index] = *s1;
		index++;
		s1++;
	}
	while (*s2)
	{
		toss[index] = *s2;
		index++;
		s2++;
	}
	return (toss);
}
