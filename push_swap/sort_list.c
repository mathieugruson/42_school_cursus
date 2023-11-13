/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:28:21 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 16:45:55 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_list(t_list **a, t_list **b)
{
	int	lstlen;

	if (check_sorting(a, ft_lstlen(*a)))
		return ;
	lstlen = ft_lstlen(*a);
	if (lstlen == 2)
		sa(a);
	if (lstlen == 3)
		sort_three(a);
	if (lstlen == 5)
		sort_five(a, b);
	if (lstlen == 4 || lstlen > 5)
		sort_after_five(a, b);
}
