#include <stdio.h>
int factorial(int x);
int factorial( int x){
    if (x==0){
        return 1;
    }
    else if (x==1){
        return 1;

    }
    else{
        return x*factorial(x-1);
    }

}
int main(){
    int n;
    printf("please enter the value of n ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    



}