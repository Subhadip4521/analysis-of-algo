//
#include<stdio.h>


int partition(int arr[], int s, int e){
    int pivot= arr[s], temp;
    int i=s, j=e;

    if(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
        temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
    temp= arr[j];
    arr[j]=arr[s];
    arr[s]=temp;

    return j;
}

void quick_sort(int arr[], int s, int e){
    int position;
    if(s<e){
        position= partition(arr, s, e);
        quick_sort(arr, s, position-1);
        quick_sort(arr,position+1, e);
    }
}

int main(){
    int n,i,item;
    printf("Enter how many numbers do you want in the array: ");
    int arr[n];
    scanf("%d",&n);

    printf("Enter the numbers: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    quick_sort(arr, 0, n-1);
    printf("Numbers in the array after sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}