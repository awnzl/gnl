/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenzel <avenzel@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:20:10 by avenzel           #+#    #+#             */
/*   Updated: 2016/12/22 13:08:09 by avenzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H
# include <fcntl.h>
# include "libft.h"
# define BUFF_SIZE 32

typedef struct		s_fds
{
	int				fd;
	char			*bf;
	struct s_fds	*next;
}					t_fds;

int					get_next_line(const int fd, char **line);

#endif
