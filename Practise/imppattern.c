#include <stdio.h>
int main(){
    int n;
    printf("please etner the value of n ");
    scanf("%d",&n);
    // for (int i=1 ; i<=n;i++){
    //     for (int j =n-i;j>0;j--){
    //         printf("*");
    //     }
    //     for (int o=0;o<i;o++){
    //         printf(" ");

    //     }
        
    // printf("\n");
    for (int i=1 ; i<=n;i++){
        for (int j =n-i;j>0;j--){
            printf(" ");
        }
        for (int o=0;o<i;o++){
            printf("*");

        }
        
    printf("\n");
    
    
    }
    
}


