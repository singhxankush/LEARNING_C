#include <stdio.h>
int main(){
    int n;
    printf("please tner the value of n ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int m=n-i;m>0;m--){
            printf(" ");

        }
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");

    }
    for(int i =1;i<=n;i++){
        for(int m=1;m<i;m++){
            printf(" ");

        }
        for(int j=n-i+1;j>0;j--){
            printf(" *");
        }
        printf("\n");

    }
}