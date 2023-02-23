/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:48:07 by ckarl             #+#    #+#             */
/*   Updated: 2023/01/04 18:57:23 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif

typedef struct node
{
	char			*content;
	struct node		*next;
}	c_list;

char	*get_next_line(int fd);
int		ft_lstsize(c_list *lst);
void	*ft_getlist(c_list **lst, int fd);
void	*ft_lstadd_back(c_list **lst, char *buf, int success);
int		checkcont(char *str);
//c_list	*ft_lstnew(char *buf);
c_list	*ft_lstlast(c_list *lst);
//char	*ft_strjoin(c_list *list);
void	ft_getline(char **line, c_list *list);

# endif