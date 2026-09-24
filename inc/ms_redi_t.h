/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_redi_t.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_REDI_T_H
# define MS_REDI_T_H

enum						e_ms_redi_kind
{
	REDI_INVALID = -1,
	REDI_IN,
	REDI_OUT,
	REDI_OUT_APPEND,
	REDI_HERE_DOC
};

enum						e_ms_redi_source
{
	REDI_SOURCE_FD,
	REDI_SOURCE_PATH
};

typedef struct s_redi
{
	enum e_ms_redi_kind		kind;
	enum e_ms_redi_source	source_kind;
	union					u_redi_source
	{
		char				*path;
		int					fd;
	} source;
}							t_ms_redi;

# define ERR_MSG_REDI_SRC "unexpected redirection source"
#endif
