#include <stdio.h>

int func(void)
{
    static int a = 0;
    a++;
    return a;
}
int main(int argc, char const *argv[])
{
    printf("%d \n", func());
    printf("%d \n", func());
    printf("%d \n", func());
}
