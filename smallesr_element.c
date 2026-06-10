#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int small = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("Smallest element : %d", small);
    return 0;
}