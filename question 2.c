
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], pattern[100];
    char *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter pattern: ");
    fgets(pattern, sizeof(pattern), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';
    pattern[strcspn(pattern, "\n")] = '\0';

    p = strstr(str, pattern);

    if (p != NULL)
        printf("Pattern found at index: %d", (int)(p - str));
    else
        printf("Pattern not found");

    return 0;
}

