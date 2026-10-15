#include <stdio.h>
//factorial using recursion 
int factorial(int x){
    if (x==0){
        return 1;
    }
    return factorial(x-1)*x;
}
int main(){
    int n;
    printf("please enter the number ");
    scanf("%d",&n);
    printf("the factorial is %d",factorial(n));
}
