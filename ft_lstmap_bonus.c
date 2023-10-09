/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeongsh <hyeongsh@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:17:51 by hyeongsh          #+#    #+#             */
/*   Updated: 2023/10/09 20:54:24 by hyeongsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_addlst(t_list *lst, t_list *head,
		void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	void	*tempcon;

	while (lst != NULL)
	{
		tempcon = f(lst->content);
		cur = ft_lstnew(tempcon);
		if (cur == 0 && tempcon != 0)
		{
			free(tempcon);
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, cur);
		lst = lst->next;
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*tempcon;

	if (lst == 0)
		return (0);
	tempcon = f(lst->content);
	head = ft_lstnew(tempcon);
	if (head == 0 && tempcon != 0)
	{
		free(tempcon);
		return (0);
	}
	lst = lst->next;
	if (ft_addlst(lst, head, f, del) == 0)
		return (0);
	return (head);
}
