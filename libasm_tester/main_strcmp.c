#include "libasm.h"


int main(int argc, char **argv)
{
	char *s1 = "Supercalifragilistichespiralidoucioussss";
    if (argc == 3 && atoi(argv[1]) == 1)
    {
       printf("%d\n", ft_strcmp(argv[2], s1));
    }
    else if (argc == 3 && atoi(argv[1]) == 2)
    {
        printf("%d\n", strcmp(argv[2], s1));
    }
    return 0;
}


