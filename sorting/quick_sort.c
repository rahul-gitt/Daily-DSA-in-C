#include <stdio.h>
int partition(int arr[], int st, int end)
{
    int idx = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            int temp = arr[idx];
            arr[idx] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[idx + 1];
    arr[idx + 1] = arr[end];
    arr[end] = temp;
    return idx + 1;
}
void quicksort(int arr[], int st, int end)
{
    if (st < end)
    {
        int pivotidx = partition(arr, st, end);
        quicksort(arr, st, pivotidx - 1); // left half
        quicksort(arr, pivotidx + 1, end);
    }
}
int main()
{
    int n;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);

    printf("Sorted Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}