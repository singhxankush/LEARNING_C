#include <stdio.h>
int is_leap(int x );
int main(){
    int n ;
    printf("please enter the year : ");
    scanf("%d",&n);
    is_leap(n)==1?printf("%d is a leap year ",n):printf("%d is not a leap year ",n);

}
int is_leap(int x ){
    if(x%100==0){
        if(x%4==0){
            return 1;
        }
        else {
            return 0;
        }
    }
    else if ((x%100!=0)&&(x%4==0)){
        return 1;
    }
    else {
        return 0;
    }

}