#include <stdio.h>
int sum_n(int  x);
int main(){
    int a ;
    printf("please enter the value of a ");
    scanf("%d",&a);
    printf("the value of sum of %d terms   is %d",a,sum_n(a));



}
int sum_n(int x ){
    if (x==1){
        return 1;
    }
    else {
        return x+sum_n(x-1);
    }

}