/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include "ms_safe.h"
#include <fcntl.h>

int	ms_open_infile(char *infile_path)
{
	return (ms_open(infile_path, O_RDONLY | O_CLOEXEC));
}

int	ms_open_outfile(char *outfile_path)
{
	return (ms_open(outfile_path, O_CREAT | O_TRUNC | O_WRONLY | O_CLOEXEC));
}

int	ms_open_outappfile(char *outfile_path)
{
	return (ms_open(outfile_path, O_CREAT | O_WRONLY | O_APPEND | O_CLOEXEC));
}
