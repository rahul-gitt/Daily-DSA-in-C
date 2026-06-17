#include <stdio.h>
int main()
{
    int n, target;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements(sorted order) : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a target : ");
    scanf("%d", &target);
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            printf("Element found at index : %d", mid);
            return 0;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found..");
    return 0;
}