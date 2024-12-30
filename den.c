#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int fd;
    char buf[256];
    int chars_read;
    fd = open("file.txt", O_RDONLY);
    chars_read = read(fd, buf, 5);
    buf[chars_read] = '\0';
    printf("buff %s \n", buf);
}