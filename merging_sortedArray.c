#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Index %d >> %d\n",i,arr[i]);
    }
    printf("\n");
}

void merge(int a[],int b[],int m, int n){
    int size=m+n;
    int i=0,j=0,k=0,c[100];
    while(i<=m&&j<=n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    for(;i<=m;i++){c[k++]=a[i];}
    for(;j<=n;j++){c[k++]=b[j];}
    display(c,size);
}

int main(){
int a[]={10,20,30,40};
int b[]={1,2,3,4,5};
int m=sizeof(a)/sizeof(int);
int n=sizeof(b)/sizeof(int);
merge(a,b,m,n);
return 0;
}