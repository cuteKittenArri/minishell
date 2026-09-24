/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_exec.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_EXEC_H
# define MS_EXEC_H
# include "ms_cmd_t.h"

void	ms_exec(t_ms_cmd **run_me);
// run an array of cmds in a pipe. don't use for 1 cmd.
t_byte	ms_exec_pipe(t_ms_cmd **full_pipe);

// runs a single and doesn't fork for all of them
t_byte	ms_exec_cmd(t_ms_cmd *run_me);

void	ms_heredocs_prepare(t_ms_cmd *cmd);
void	ms_heredoc_cleanup(t_ms_cmd *cmd);

#endif
