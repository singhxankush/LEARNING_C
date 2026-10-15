#include <stdio.h>
int main(){
    int n ;
    printf("please enter the value of n ");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        if (i%3==0){
            continue;
        }
        else{
            printf("%d ",i);
        }
    }
}