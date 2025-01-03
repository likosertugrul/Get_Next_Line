/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertugrullikos <ertugrullikos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:23:07 by ertugrullik       #+#    #+#             */
/*   Updated: 2025/01/03 08:31:17 by ertugrullik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *buf, char *backup)
{
	int		line_read;
	char	*temp;

	line_read = 1;
	while (line_read != 0)
	{
		line_read = read(fd, buf, BUFFER_SIZE);
		if (line_read == -1)
			return (0);
		else if (line_read == 0)
			break ;
		buf[line_read] = 0;
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, buf);
		free(temp);
		temp = NULL;
		if (ft_strchr(buf, '\n'))
		{
			break ;
		}
	}
	return (backup);
}

static char	*split_line(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != 0)
		count++;
	if (line[count] == 0 || line[1] == 0)
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == 0)
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = 0;
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	line = read_line(fd, buf, backup);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	backup = split_line(line);
	return (line);
}
