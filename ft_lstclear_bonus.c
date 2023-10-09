/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:12:19 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/09 20:23:59 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*freelst;

	cur = *lst;
	if (lst == 0 || *lst == 0 || del == 0)
		return ;
	while (cur != NULL)
	{
		freelst = cur;
		cur = cur->next;
		ft_lstdelone(freelst, del);
	}
	*lst = 0;
}
