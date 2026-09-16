

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], text[50];
    int pos, i, j;

    printf("Enter a string: ");
    gets(str);

    printf("Enter text to insert: ");
    gets(text);

    printf("Enter position: ");
    scanf("%d", &pos);


    for(i = strlen(str); i >= pos; i--)
    {
        str[i + strlen(text)] = str[i];
    }
    for(j = 0; j < strlen(text); j++)
    {
        str[pos + j] = text[j];
    }

    printf("After insertion: %s", str);

    return 0;
}

