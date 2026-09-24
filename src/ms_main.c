/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_env.h"
#include "ms_exec_utils.h"
#include "ms_exit.h"
#include "ms_repl.h"
#include "ms_signal.h"
#include <libft_io.h>

int	main(int argc, char **argv)
{
	if (argc != 1)
		return ((void)argv, -1);
	ms_signal_init();
	ms_env_init();
	ms_repl();
	ms_repl_history_clear();
	ms_env_free();
	ft_gnl(-1);
	ms_stdenv_close();
	ms_exit(ms_env_get_status());
	return (ms_env_get_status());
}
