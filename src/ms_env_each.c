/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_env_each.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_env_core.h"
#include <stddef.h>

static void	ms_env_folder(t_kv_pair *pair, void *folder)
{
	((void (*)(t_kv_pair *, void *))folder)(pair->key, pair->val);
}

void	ms_env_each(void (*each)(char *name, char *value))
{
	if (each == NULL)
		return ;
	ft_kv_fold(ms_env_core_get(), ms_env_folder, each);
}
