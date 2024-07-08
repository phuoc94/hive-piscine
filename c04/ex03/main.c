#include <stdio.h>

int ft_atoi(char *str);

int main(int argc, char *argv[])
{
    if(argc != 2 )
    {
        printf("give 1 parameter");
        return (1);
    }

    printf("M:%s == %d\n", argv[1], ft_atoi(argv[1]));
    return (0);
}