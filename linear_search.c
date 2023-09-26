//
#include<stdio.h>

int linear_search(int arr[], int start, int end, int item){
    if(start<=end){
        while(arr[start]==item){
            printf("%d is in the array at index %d...",item,start);
            return item;
        }
        linear_search(arr,start+1,end,item);
    }
    else{
        printf("%d is not in the list...",item);
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
    
    printf("Enter the number you want to search using linear search: ");
    scanf("%d",&item);
    linear_search(arr, 0, n-1, item);
    return 0;
}