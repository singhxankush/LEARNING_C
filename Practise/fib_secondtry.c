#include <stdio.h>
int fib(int x ){
    if (x==2){
        return 1;
    }
    if (x==1){
        return 0;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}
int main(){
    int i =1;
    while (i<10){
        printf("%d\n",fib(i));
        i++;

    }
    
    
}