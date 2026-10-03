#include <stdio.h>
int main(){
    int n;
    printf("please enter the vaue of n ");
    scanf("%d",&n);
    //Block 1
    for(int i =1;i<=n;i++){
        for(int j =n-i;j>=0;j--){
            printf("*");
        }
        //space in them 
        for(int g=0;g<i;g++){
            printf(" ");
            printf(" ");
            
        }
        //other half
        for(int j =n-i;j>=0;j--){
            printf("*");
        

        }
        for(int k=1;k<i;k++){
            printf("");

        }
        printf("\n");
    //Block 2
    }
    for(int i =1;i<=n;i++){
        for(int k=0;k<i;k++){
            printf("*");
        }
        for(int j =n-i+1;j>0;j--){
            printf(" ");
            printf(" ");
            
        }
        for(int h=0;h<i;h++){
            printf("*");
        }
        
        printf("\n");
    }
}
