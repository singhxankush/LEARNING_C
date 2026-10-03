#include<stdio.h>
int main(){
    int n;
    printf("please enter the value of n  : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for( int k =1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for (int j=1;j<i;j++){
            printf(" ");
        }
        for (int j=i;j<=2*n-i;j++){
            printf("*");
        }
        printf("\n");
    }

    
}