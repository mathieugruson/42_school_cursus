/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:38:46 by mgruson           #+#    #+#             */
/*   Updated: 2022/10/16 13:18:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_node(t_list *lst)
{
	int		len;

	len = 0;
	while (((char *)lst->content)[len])
		len++;
	write(1, lst->content, len);
	write(1, "\n", 1);
}
