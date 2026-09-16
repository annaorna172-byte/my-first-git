
#include <stdio.h>


char GETCHAR(char str[], int n)
{
    return str[n - 1];
}


void PUTCHAR(char str[], int n, char c)
{
    str[n - 1] = c;
}


int LENGTH(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}


int POS(char str1[], char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while (str2[j] != '\0' && str1[i + j] == str2[j])
        {
            j++;
        }

        if (str2[j] == '\0')
        {
            return i + 1;
        }
    }

    return -1;
}


void CONCAT(char str1[], char str2[])
{
    int i = LENGTH(str1);
    int j = 0;

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}


void SUBSTRING(char str1[], int i, int m, char result[])
{
    int j;

    for (j = 0; j < m; j++)
    {
        result[j] = str1[i - 1 + j];
    }

    result[j] = '\0';
}


void DELETE(char str[], int i, int m)
{
    int j;
    int length = LENGTH(str);

    for (j = i - 1; j + m < length; j++)
    {
        str[j] = str[j + m];
    }

    str[j] = '\0';
}


void INSERT(char str1[], char str2[], int i)
{
    int len1 = LENGTH(str1);
    int len2 = LENGTH(str2);
    int j;

    for (j = len1; j >= i - 1; j--)
    {
        str1[j + len2] = str1[j];
    }

    for (j = 0; j < len2; j++)
    {
        str1[i - 1 + j] = str2[j];
    }
}

int COMPARE(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[200] = "Hello";
    char str2[100] = "World";
    char result[100];

    printf("GETCHAR: %c\n", GETCHAR(str1, 2));

    PUTCHAR(str1, 2, 'a');
    printf("PUTCHAR: %s\n", str1);

    printf("LENGTH: %d\n", LENGTH(str1));

    printf("POS: %d\n", POS("Hello World", "World"));

    CONCAT(str1, str2);
    printf("CONCAT: %s\n", str1);

    SUBSTRING(str1, 2, 5, result);
    printf("SUBSTRING: %s\n", result);

    DELETE(str1, 2, 3);
    printf("DELETE: %s\n", str1);

    INSERT(str1, "ABC", 2);
    printf("INSERT: %s\n", str1);

    printf("COMPARE: %d\n", COMPARE("Apple", "Banana"));

    return 0;
}
