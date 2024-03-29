/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audreyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:00:11 by audreyer          #+#    #+#             */
/*   Updated: 2021/12/05 18:15:25 by audreyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst) {
	while (lst) {
		if (lst->next == 0)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
