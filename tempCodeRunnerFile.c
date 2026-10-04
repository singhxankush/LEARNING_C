#include <stdio.h>
int fib_n(int x );
int main(){
    int n;
    printf("please enter the value of n:");
    scanf("%d",&n);
    printf("the nth elemnt of fibonaci is %d",fib_n(n));


}
int fib_n(int x ){
    if (x==1){
        return 0;
    }
    else if (x==2){
        return 1;
    }
    else{
        return fib_n(x-1)+fib_n(x-2);
    }
}