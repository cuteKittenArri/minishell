/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_cmd_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_cmd_t.h"
#include "ms_redi.h"
#include <libft_arr.h>
#include <libft_mem.h>

void	ms_cmd_free(t_ms_cmd *cmd)
{
	if (cmd == NULL)
		return ;
	ft_arr_each((t_arr)(cmd->reds), (void (*)(t_arr_el))ms_redi_free);
	ft_arr_each((t_arr)(cmd->argv), (void (*)(t_arr_el))ft_free);
	ft_free(cmd->reds);
	ft_free(cmd->argv);
	ft_free(cmd);
}
