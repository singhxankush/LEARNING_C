#include<stdio.h>
int main(){
    int n;
    printf("please enter the value of n  : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for (int j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    
}