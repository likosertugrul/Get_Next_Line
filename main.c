#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
int main(void)
{
    int fd;
    char *line;


    fd = open("file.txt" ,O_RDONLY);
    line = get_next_line(fd);
    printf("%s \n", line);
    return 0;
}
