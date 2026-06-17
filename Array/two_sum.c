#include <stdio.h>
int main()
{
    int n, target;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the traget : ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Target found at index : [%d,%d]", i, j);
                return 0;
            }
        }
    }
    printf("Pair not found...");
    return 0;
}