/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctestabu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 14:25:10 by ctestabu          #+#    #+#             */
/*   Updated: 2019/04/21 14:25:10 by ctestabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"


int	get_next_line(const int fd, char **line)
{
	static char *stack[OPEN_MAX];
	int			ret;
	char		*heap;
	int			i;

}

static int	readfile(int fd, char *heap, char **stack, char **line)
{
	char	*temp_stack;
	int		ret;

	ret = read(fd, heap, BUFF_SIZE);
	while (ret)
	{
		heap[ret] = '\0';
		if(*stack)
		{
			*temp_stack = stack;
		}
	}
	return (ret);
}

static int get_line(char **stack, char **line)
//{
//	char *tmp_stack;
//	char *strchr_stack;
//	int i;
//
//	i = 0;
//	strchr_stack = *stack;
//	while (strchr_stack[i] != '\n')
//		if (!strchr_stack[i++])
//			return (0);
//	tmp_stack = &strchr_stack[i];
//	*tmp_stack = '\0';
//	*line = ft_strdup(*stack);
//	*stack = ft_strdup(tmp_stack + 1);
//	return (1);
//}