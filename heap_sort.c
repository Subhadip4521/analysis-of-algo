//
#include <stdio.h>

void max_heapify(int a[], int size, int i);
void heap_sort(int a[], int size);
int main()
{
    int n;
    printf("Number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    heap_sort(arr, n);
    printf("Your elements are: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void max_heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= size && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, size, largest);
    }
}
void heap_sort(int arr[], int size)
{
    int i;
    for (i = size / 2; i > 0; i--)
    {
        max_heapify(arr, size, i);
    }
    int j;
    for (j = size; j > 1; j--)
    {
        int temp = arr[1];
        arr[1] = arr[j];
        arr[j] = temp;
        max_heapify(arr, j - 1, 1);
    }
}