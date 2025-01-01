#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Dosya açılamadı");
		return (1);
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}

	if (close(fd) < 0)
	{
		perror("Dosya kapatılamadı");
		return (1);
	}

	return (0);
}
