#include <stdio.h>
int fib(int x );
int main(){
    int a ;
    printf("Please enter the terms which you want to find ");
    scanf("%d",&a);
    printf("The %d terms is %d",a,fib(a));

    
}
int fib (int x ){
    if (x==1){
        return 0 ;

    }
    else if  (x==2){
        return 1;

    }
    else{
        return fib(x-1)+fib(x-2);
    }
    



}