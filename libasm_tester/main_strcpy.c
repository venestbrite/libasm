#include "libasm.h"

int main(int argc, char const *argv[])
{
	char mine[1000];
	char orig[1000];
	if (argc == 3 && atoi(argv[1]) == 1)
    {
       printf("%s\n", ft_strcpy(mine, argv[2]));
    }
    else if (argc == 3 && atoi(argv[1]) == 2)
    {
        printf("%s\n", strcpy(orig, argv[2]));
    }
    return 0;
}