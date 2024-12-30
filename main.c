#include "get_next_line.h"

int main(void)
{
    int fd;
    char buf[256];
    int chars_read;
    fd = open("file.txt", O_RDONLY);

    chars_read = read(fd, buf, 42);
    buf[chars_read] = '\0';
    printf("%d buff %s \n", buf);





    // while ((chars_read = read(fd, buf, 42)))
    // {
    //     buf[chars_read] = '\0';
    //     printf("buff %s \n", buf);
    // }
}