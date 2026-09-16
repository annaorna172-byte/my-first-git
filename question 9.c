

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int pos, n, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter number of characters to delete: ");
    scanf("%d", &n);

    for(i = pos; i <= strlen(str) - n; i++)
    {
        str[i] = str[i + n];
    }

    printf("After deletion: %s", str);

    return 0;
}

