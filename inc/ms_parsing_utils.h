/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_parsing_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_PARSING_UTILS_H
# define MS_PARSING_UTILS_H
# include "ms_cmd_t.h"

typedef union e_nxt_el
{
	char		*arg;
	t_ms_redi	*redi;
}				t_nxt_el;

t_ms_redi	*redi_builder(char *redi_path, int kind);

#endif
