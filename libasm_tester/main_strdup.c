#include "libasm.h"

int main(int argc, char const *argv[])
{
	char *s1;
	if (argc == 3 && atoi(argv[1]) == 1)
    {
        s1 = ft_strdup(argv[2]);
       printf("%s\n", s1);
       free(s1);
    }
    else if (argc == 3 && atoi(argv[1]) == 2)
    {
        s1 = strdup(argv[2]);
        printf("%s\n", s1);
        free(s1);
    }
    return 0;
}