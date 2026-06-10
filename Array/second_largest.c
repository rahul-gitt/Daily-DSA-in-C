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
    int large = arr[0];
    int seclarge = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            seclarge = large;
            large = arr[i];
        }
    }
    printf("The second largest element is : %d", seclarge);
    return 0;
}
