#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[]) {

	if(argc != 3)
	{
		printf("give 2 params");
		return (1);
	}
  	printf("%d == ", (ft_strcmp(argv[1], argv[2]));
	printf("%d \n", (strcmp(argv[1], argv[2]));

  	return 0;
}
