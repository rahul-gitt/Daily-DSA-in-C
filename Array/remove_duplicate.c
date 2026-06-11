// Remove Duplicate Elements from sorted Array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    printf("Array after removing dupliates : ");
    for (int k = 0; k <= i; k++)
    {
        printf(" %d", arr[k]);
    }
    return 0;
}