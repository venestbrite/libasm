#include "libasm.h"

int main(int argc, char *argv[])
{
	char *s1;
	if (argc == 3 && atoi(argv[1]) == 1)
    {
       ft_write(1, argv[2], ft_strlen(argv[2]));
    }
    else if (argc == 3 && atoi(argv[1]) == 2)
    {
        write(1, argv[2], ft_strlen(argv[2]));
    }
    return 0;
}