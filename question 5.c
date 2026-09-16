
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[100];
    char *p;

    printf("Enter a string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    p = strstr(str, sub);

    if (p != NULL)
    {
        printf("Substring found at position: %d", p - str);
    }
    else
    {
        printf("Substring not found");
    }

    return 0;
}
