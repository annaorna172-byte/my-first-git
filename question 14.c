

#include <stdio.h>

int main()
{
    int a[100], n, x;
    int low, high, mid;
    int first = -1, last = -1, count = 0;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);


    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if(x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }


    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if(x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(first == -1)
    {
        printf("Element not found");
    }
    else
    {
        count = last - first + 1;

        printf("First occurrence = %d\n", first);
        printf("Last occurrence = %d\n", last);
        printf("Total count = %d\n", count);
    }

    return 0;
}

