#include <stdio.h>
#include <limits.h>
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
    int small = INT_MAX;
    int sec_small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            sec_small = small;
            small = arr[i];
        }
        else if (arr[i] > small && arr[i] < sec_small)
        {
            sec_small = arr[i];
        }
    }
    if (sec_small == INT_MAX)
    {
        printf("Second smallest element not exist ");
    }
    else
    {
        printf("Second smallest element : %d", sec_small);
    }
    return 0;
}