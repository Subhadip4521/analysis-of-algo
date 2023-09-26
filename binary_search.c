//
#include<stdio.h>

int binary_search(int arr[], int start, int end, int item){
    int mid=(start+end)/2;
    if(start<=end){
        if(arr[mid]==item){
            printf("%d is in the array at index %d...",item, mid);
            return item;
        }
        if(arr[mid]<item){
            binary_search(arr, mid+1, end, item);
        }
        if(arr[mid]>item){
            binary_search(arr, start, mid-1, item);
        }
    }
    else{
        printf("%d is not in the array...",item);
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
    
    printf("Enter the number you want to search using binary search: ");
    scanf("%d",&item);
    binary_search(arr, 0, n-1, item);
    return 0;
}