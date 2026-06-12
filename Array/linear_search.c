#include <stdio.h>
int main()
{
    int n, num;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to find : ");
    scanf("%d", &num);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }
    if (found)
    {
        printf("\nElement foud in the array");
    }
    else
    {
        printf("Element not Found");
    }
    return 0;
}