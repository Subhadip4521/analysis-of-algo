//*
//**
//***
//****
#include<stdio.h>
void pattern(int n){
    if(n==1){
        printf("* ");
        printf("\n");
    }
    else{
        pattern(n-1);
        for(int i=0; i<n; i++){
            printf("* ");
        }
            printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}