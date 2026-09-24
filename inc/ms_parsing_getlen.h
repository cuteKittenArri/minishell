/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_parsing_getlen.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_PARSING_GETLEN_H
# define MS_PARSING_GETLEN_H
# include <stddef.h>

// this header is to detected parts of the syntax
// like var names, or quotes
// every function in here expectes the string to start with what is searched
// if it does not start with what we are searching every function here returns 0

size_t	ms_parsing_varname(char *str);

#endif
