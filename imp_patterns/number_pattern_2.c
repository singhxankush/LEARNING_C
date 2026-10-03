#include<stdio.h>
int main(){
    int n;
    printf("please enter the value of n  : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n-i;j++){
            printf(" ");
        }
        for(int k =1;k<=i;k++){
            printf("%d",i);
        }
        printf("\n");
    }
    
}