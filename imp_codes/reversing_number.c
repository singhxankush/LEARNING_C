#include <stdio.h>
int main(){
    int n ;
    printf("please enter the value of n : ");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("the reversed number is %d",rev);
   
}