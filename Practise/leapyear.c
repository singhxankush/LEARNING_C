#include <stdio.h>
int main(){
    int a ;
    printf("please enter the year ");
    scanf("%d",&a);
    if (a%100==0){
        if (a%4==0){
            printf("this is a leap year ");
        }
        else{
            printf("this is not a leap year ");
        }
        
    }
    else if ((a%4==0)&&(a%100!=0)){
        printf("this is a leap year ");
    }
    else{
        printf("this is not a leap year ");
    }
    
}