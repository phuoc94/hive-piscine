#include <stdio.h>
#include <string.h>

// Assuming your ft_strstr function prototype
char *ft_strstr(const char *haystack, const char *needle);

int main() {
    // Test cases with various scenarios
    const char *haystack[] = {
        "This is a test string",
        "Hello, world!",
        "Mississippi",
        "Empty string",
        "",  // Empty haystack
        "Very long string with aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",  // Needle longer than haystack
        "aaab needle in aaab haystack",
        "aaab needle not in aaac haystack",
        "Find multiple needles: Mississippi sippi si",
        "Find needle at the beginning: Hello, world!",
        "Find needle at the end: This is a test string!",
        "Find overlapping needles: abaab aba bbc",
        "Find empty needle: Mississippi ",
        "Find needle with special characters: Hello, w()rld!"
    };
    const char *needle[] = {
        "test",
        "world",
        "sippi",
        "string",
        "",   // Empty needle
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
        "This is a test string",  // Needle longer than haystack
        "needle",
        "needle",
        "sippi", "si", "",
        "Hello",
        "string!",
        "aba",
        "",
        "w()rld"
    };

    int num_tests = sizeof(haystack) / sizeof(haystack[0]);

    for (int i = 0; i < num_tests; i++) {
        char *result = ft_strstr(haystack[i], needle[i]);

        // Print expected and actual results
        printf("Haystack: %s\n", haystack[i]);
        printf("Needle: %s\n", needle[i]);

        if (result) {
            printf("Expected result (using strstr): %p\n", strstr(haystack[i], needle[i]));
            printf("ft_strstr result: %p\n", result);
            // Print the substring if it's found within the haystack
            printf("Substring: %s\n\n", result);
        } else {
            printf("Expected result (using strstr): NULL\n");
            printf("ft_strstr result: NULL\n\n");
        }
    }

    return 0;
}
