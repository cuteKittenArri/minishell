/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_env.h"
#include <errno.h>
#include <libft_mem.h>
#include <limits.h>
#include <unistd.h>

char	*ms_pwd(void)
{
	static char	cwd[PATH_MAX];

	ft_bzero(cwd, sizeof(cwd));
	errno = 0;
	(void) getcwd(cwd, PATH_MAX);
	if (errno != 0)
	{
		ms_env_set_status(1);
		cwd[0] = '\0';
	}
	return ((char *)cwd);
}
