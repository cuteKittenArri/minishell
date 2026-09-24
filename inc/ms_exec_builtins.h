/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_exec_builtins.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_EXEC_BUILTINS_H
# define MS_EXEC_BUILTINS_H
# include <libft_byte_t.h>

// every builtin implementation has this form
typedef t_byte	(*t_ms_builtin)(char **argv);

// getters to find a builtin
t_ms_builtin	ms_builtin_get(char *name);
t_ms_builtin	ms_builtin_get_frk(char *name);
t_ms_builtin	ms_builtin_get_nofrk(char *name);

// builtin implementations
t_byte			ms_exec_builtin_cd(char **argv);
t_byte			ms_exec_builtin_echo(char **argv);
t_byte			ms_exec_builtin_env(char **argv);
t_byte			ms_exec_builtin_exit(char **argv);
t_byte			ms_exec_builtin_export(char **argv);
t_byte			ms_exec_builtin_pwd(char **argv);
t_byte			ms_exec_builtin_unset(char **argv);

#endif
