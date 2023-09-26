//
#include <stdio.h>

int ins_heap(int arr[], int size, int i);

int main()
{
    int i, n;

    printf("Number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int k = 1; k <= n; k++)
    {
        scanf("%d", &arr[k]);
    }
    printf("\nThe heap tree array: ");
    for (int j = 1; j <= n; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\nThe number you want to insert: ");
    scanf("%d", &i);

    ins_heap(arr, n, i);
    printf("\nThe heap tree after inserting any other number: ");
    for (int j = 1; j <= n + 1; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}

int ins_heap(int arr[], int size, int i)
{
    size = size + 1;
    int location = size;

    while (location > 1)
    {
        int parent = (location / 2);
        if (i <= arr[parent])
        {
            arr[location] = i;
            return 0;
        }

        arr[location] = arr[parent];
        location = parent;
        arr[location] = i;
    }
    return 0;
}
