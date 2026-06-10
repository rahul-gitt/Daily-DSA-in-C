#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sort = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sort = 0;
            break;
        }
    }
    if (sort)
    {
        printf("Array is sorted...");
    }
    else
    {
        printf("Array is not sorted..");
    }
    return 0;
}