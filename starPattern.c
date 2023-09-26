//
#include<stdio.h>

void starPattern(int n){
    if(n==0){
        printf("Enter more than 0.");
    }
    else if(n==1){
        printf("*");
    }
    else{
        starPattern(n-1);
        printf("\n");
        for(int i=0; i<n; i++){
            printf("* ");
        }
    }
}

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    starPattern(n);
    return 0;
}