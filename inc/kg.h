/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kg.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KG_H
# define KG_H
# include <stdbool.h>
# include <unistd.h>

// @brief add pid to structure, bool to check if it worked
void	kg_add(pid_t new_pid);

// @brief remove a pid from the kindergarden
bool	kg_rm(pid_t existing_pid);

// @brief call the apply function against each stored pointer
void	kg_each(void (*apply)(pid_t stored_pid));

// @brief waits for all stored pids and frees the internal data structure
// only waits for stored pids if they wait is true
// (use with false after forking)
void	kg_cleanup(bool wait);

#endif
