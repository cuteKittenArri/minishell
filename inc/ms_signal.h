/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_signal.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 23:17:15 by stmuller          #+#    #+#             */
/*   Updated: 2026/08/27 23:19:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_SIGNAL_H
# define MS_SIGNAL_H
// one slot per t_byte, so every signal number fits
# define MS_SIG_SLOTS 256

typedef void	(*t_ms_sig_handler)(int);

void			ms_signal_init(void);
void			ms_signal_child(void);

void			ms_signal_listen(int sig);
int				ms_signal_last(void);
void			ms_signal_set_handler(int sig, t_ms_sig_handler dab);
int				ms_signal_consume(void);
#endif
