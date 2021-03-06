/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhuang <yhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:47:08 by yhuang            #+#    #+#             */
/*   Updated: 2018/02/27 15:06:43 by yhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;   // 判断无效输入
	new->next = *alst; // 将 next->next 的值变成 alst所指向的那个东西(指向t_list的指针)一样
	*alst = new;       // alst所指向的那个东西(指向t_list的指针)变成 和 new一样
}
