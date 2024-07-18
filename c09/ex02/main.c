
#include <stdio.h>
#include <stdlib.h>
char **ft_split(char *str, char *charset);

int main()
{
    char *test_cases[][2] = {
        {"Hello,world! This is a test.", ",! "},
        {"split,this,string", ","},
        {"multiple;;;separators;;;together", ";"},
        {"ends with separator;;", ";"},
        {";;starts with separator", ";"},
        {"no separators here", ","},
        {"", ","},
        {";;;;", ";"},
        {"edge,,cases,,in,,betweexn", ",,"},
        {"one.separator.in.middle", "."}
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        printf("Test case %d: \"%s\" with charset \"%s\"\n", i + 1, test_cases[i][0], test_cases[i][1]);
        char **result = ft_split(test_cases[i][0], test_cases[i][1]);
        for (int j = 0; result[j] != NULL; j++) {
            printf("Result %d: \"%s\"\n", j + 1, result[j]);
            free(result[j]);
        }
        free(result);
        printf("\n");
    }

    return 0;
}
