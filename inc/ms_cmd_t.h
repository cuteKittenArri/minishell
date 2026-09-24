/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_op_t.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_CMD_T_H
# define MS_CMD_T_H
# include "ms_redi_t.h"
# include <libft_ll.h>
# include <unistd.h>

typedef enum e_ms_heredoc_state
{
	HEREDOC_NO,
	HEREDOC_RUNNING,
	HEREDOC_READY
}						t_ms_heredoc_state;

typedef struct s_ms_heredoc
{
	t_ms_heredoc_state	state;
	union				u_heredoc_value
	{
		char			**lines;
		pid_t			writer;
	} value;
	t_ms_redi			*source_redi;
}						t_ms_heredoc;

typedef struct s_ms_cmd
{
	char				**argv;
	t_ms_redi			**reds;
	t_ms_heredoc		active_heredoc;
}						t_ms_cmd;

t_ms_cmd				*ms_cmd_new(t_list *redi_stck, t_list *argv_stack);
void					ms_cmd_free(t_ms_cmd *cmd);
void					ms_cmd_update_heredoc(t_ms_cmd *cmd);

#endif
