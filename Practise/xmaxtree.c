#include <stdio.h>
int main(){
    int n;
    printf("please enther the value of n ");
    scanf("%d",&n);
    for (int m =0; m<n;m++){
        for(int i =1;i<=n;i++){
            for(int j =n-i;j>0;j--){
                printf(" ");

            }
            for(int k=0;k<i;k++){
                printf(" *");
            }
            printf("\n");
        }
    if (m==n-1){
        for(int i =0; i <m;i++){
            for(int k=0;k<n-2;k++){
                printf(" ");
            }

            for(int j=0;j<2;j++){
                printf(" *");
            }
        printf("\n");
        }

        }
    }
    }

