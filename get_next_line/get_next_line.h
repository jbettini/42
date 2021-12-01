/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:17:47 by mmatthie          #+#    #+#             */
/*   Updated: 2021/12/01 19:26:10 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

size_t	ft_strlen(char	*str);
char	*ft_isn(char	*str, int c);
char	*ft_strjoin(char	*src, char	*dest);
char	*ft_makeline(char	*save);
char	*ft_restline(char	*save);
char	*get_next_line(int fd);

#endif
