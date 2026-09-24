/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_safe_os.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this needs to have all the protected versions of calls
// that deal with os processes like fork and wait

#include "kg.h"
#include "ms_exit.h"
#include "ms_signal.h"
#include <errno.h>
#include <libft_byte_t.h>
#include <libft_os.h>
#include <stdlib.h>

pid_t	ms_fork(void)
{
	pid_t	result;

	errno = 0;
	result = fork();
	if (result < 0 || errno != 0)
		ms_error_out(EXIT_FAILURE, NULL, errno);
	if (result > 0)
	{
		kg_add(result);
		return (result);
	}
	ms_signal_child();
	kg_cleanup(false);
	return (0);
}

t_byte	ms_wait(pid_t wait_for_me)
{
	if (kg_rm(wait_for_me))
		return (ft_wait(wait_for_me));
	return (-1);
}
