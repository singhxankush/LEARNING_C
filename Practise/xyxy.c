#include <stdio.h>
int main(){
    int n=3034;
    int rev=0;
    int temp=n;
    
    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    printf("the reversed number %d",rev);
}