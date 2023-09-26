//
#include<stdio.h>


int pow(int a, int n){
    if(n==0){
        return 1;
    }
    else{
        return a * pow(a, n-1);
    }
}

int main(){
    int a,n;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&n);

    printf("%d ^ %d = %d",a,n,pow(a,n));
    return 0;
}