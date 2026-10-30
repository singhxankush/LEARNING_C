#include <stdio.h>
#include <stdlib.h>

int n_rev(int x ){
    int sign =0;
    if (x<0){
        sign=-1;

    }
    else{
        sign=1;
    }
    int temp=abs(x);
    int rev=0;
    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    return rev*sign;
}
int main(){
    printf("the rev of n is %d",n_rev(-345));

}