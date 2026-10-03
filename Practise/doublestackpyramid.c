#include <stdio.h>
int main(){
    int n;
    printf("please enter the vaue of n ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j =n-i;j>0;j--){
            printf(" ");

        }
        for(int k=0;k<i;k++){
            printf(" *");
        }
        printf("\n");
    }
    for(int i =1;i<=n;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for(int j =n-i;j>0;j--){
            printf(" *");

        }
        
        printf("\n");
    }
}
