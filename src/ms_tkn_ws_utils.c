/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_tkn_ws_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_str.h>

bool	ms_ws_is_in_ifs(char c)
{
	return (ft_strchr(" \t\n", c) != NULL);
}

bool	ms_ws_is_quote(char c)
{
	return (('\"' == c) || ('\'' == c));
}
