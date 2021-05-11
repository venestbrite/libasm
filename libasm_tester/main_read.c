#include "libasm.h"

#include <fcntl.h>

int main(int argc, char *argv[])
{
	char buffer[900];
    int fd = open(argv[2], O_RDONLY);
	if (argc == 3 && atoi(argv[1]) == 1)
    {
       ft_read(fd, buffer, 20);
       buffer[20] = '\0';
       printf("%s\n", buffer);
    }
    else if (argc == 3 && atoi(argv[1]) == 2)
    {
       read(fd, buffer, 20);
       buffer[20] = '\0';
       printf("%s\n", buffer);
    }
    close(fd);
    return 0;
}