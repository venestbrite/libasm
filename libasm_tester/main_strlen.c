#include "libasm.h"


int main(int argc, char **argv)
{
    if (argc == 3 && atoi(argv[1]) == 1)
    {
       printf("%lu\n", ft_strlen(argv[2]));
    }
    else if (argc == 3 && atoi(argv[1]) == 2)
    {
        printf("%lu\n", strlen(argv[2]));
    }
    return 0;
}


