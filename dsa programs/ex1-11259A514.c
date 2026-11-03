#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value, key;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Insertion
    printf("\nEnter position and value to insert: ");
    scanf("%d%d", &pos, &value);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    n++;

    printf("After Insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Deletion
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    printf("After Deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Traversal
    printf("\nArray Elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Searching
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if(i == n)
        printf("Element not found");

    return 0;
}