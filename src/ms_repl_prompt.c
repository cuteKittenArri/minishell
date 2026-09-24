/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_repl_prompt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this logic describes what prompt you see in interactive mode

#include "ms_env.h"
#include <unistd.h>

char	*ms_repl_prompt_shell(void)
{
	if (isatty(STDIN_FILENO) == 0)
		return ("");
	return (ms_env_get("PS1", "minishell %> "));
}

char	*ms_repl_prompt_heredoc(void)
{
	if (isatty(STDIN_FILENO) == 0)
		return ("");
	return (ms_env_get("PS2", "minishell_heredoc %> "));
}
