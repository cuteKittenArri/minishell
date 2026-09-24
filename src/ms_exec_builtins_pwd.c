/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_exec_builtins_pwd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_env.h"
#include "ms_utils.h"
#include <errno.h>
#include <libft_io.h>
#include <stdio.h>
#include <unistd.h>

t_byte	ms_exec_builtin_pwd(char **argv)
{
	char	*pwd_var;
	bool	error;

	(void)argv;
	error = false;
	pwd_var = ms_env_get("PWD", NULL);
	if (pwd_var == NULL)
	{
		pwd_var = ms_pwd();
		error = (errno != 0);
	}
	if (!error)
		ft_putendl_fd(pwd_var, STDOUT_FILENO);
	else
	{
		perror("minishell: pwd");
		ms_env_set_status(1);
	}
	return (ms_env_get_status());
}
