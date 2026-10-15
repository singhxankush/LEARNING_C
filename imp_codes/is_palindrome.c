#include <stdio.h>
int main(){
    int n ;
    printf("lease enter the value of n ");
    scanf("%d",&n);
    int rev=0;
    int m=n;
    while(m>0){
        rev=(m%10)+rev*10;
        m/=10;
    }
    printf("%d",rev);
    if (rev==n){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
}