#include <stdio.h>
int fib(int x ){
    if (x==1){
        return 0;
    }
    else if (x==2){
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }

}
int main(){
    for(int i =1;i<=10;i++){
        printf("%d ",fib(i));

    }
    

}