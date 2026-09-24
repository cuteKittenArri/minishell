/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bw.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BW_H
# define BW_H
# include <stdbool.h>

// @brief add fd to structure, bool to check if it worked
void	ft_bw_add(int fd);

// @brief remove a fd from m3
bool	ft_bw_rm(int fd);

// @brief call the apply function against each stored pointer
void	ft_bw_each(void (*apply)(int fd));

// @brief closes all stored the fds and frees the internal data structure
void	ft_bw_cleanup(void);

#endif
