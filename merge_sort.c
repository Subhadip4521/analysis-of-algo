//
#include<stdio.h>

void merge(int arr[], int lb, int ub, int mid){
    int i= lb;
    int j= mid+1;
    int k= lb;
    int arr2[lb+ub];

    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            arr2[k]=arr[i];
            i++;
            k++;
        }
        else{
            arr2[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            arr2[k]=arr[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            arr2[k]=arr[i];
            i++;
            k++;
        }
    }
    for(k=lb; k<=ub; k++){
        arr[k]=arr2[k];
    }
}

void merge_sort(int arr[], int lb, int ub){
    if(lb<ub){
        int mid= (lb+ub)/2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid+1, ub);
        merge(arr, lb,ub,mid);
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

    merge_sort(arr, 0, n-1);
    printf("Numbers in the array after sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}