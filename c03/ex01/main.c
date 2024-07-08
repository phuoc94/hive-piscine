#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[]) {

	if(argc != 4)
	{
		printf("give 3 params");
		return (1);
	}
  	printf("my ans: %d == ", (ft_strncmp(argv[1], argv[2], atoi(argv[3]))));
	printf("%d\n", (strncmp(argv[1], argv[2], atoi(argv[3]))));

  	return 0;
}
