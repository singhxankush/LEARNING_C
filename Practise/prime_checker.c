#include <stdio.h>
int main(){
    int n;
    printf("please enter the value of n ");
    scanf("%d",&n);
    int prime =1;
    int i=2;
    while (i<n){
        if (n%i==0){
            prime=0;
            break;
        }
        i++;
    }
    if (n>=2){
        if (prime==1){
             printf("the number is prime ");
    
    }
        else{
            printf("the number is not prime ");
        }
    }
    else{
        printf("please enter the number in range 2-infinite");
    }
    
}