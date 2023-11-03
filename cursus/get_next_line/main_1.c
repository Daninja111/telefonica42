
#include <fcntl.h>
#include <libc.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*get_next_line(int fd);

int main(void)
{
    char *res;
    char *res1;
    int fd;

    fd = open("file.txt", O_RDONLY);
    res = get_next_line(fd);
    printf("Return 1 > %s\n", res);
    res1 = get_next_line(fd);
    printf("Return 2 > %s\n", res1);
}
