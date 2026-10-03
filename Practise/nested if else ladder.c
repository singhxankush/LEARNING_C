#include <stdio.h>
int main(){
    int a ;
    printf("please enter the value of a ;");
    scanf("%d",&a);
    if(a<100){
        printf("the number is less than 100:\n");
        if(a%2==0){
            printf("the number is even");
        }
        else{
            printf("the number is odd");

        }
        }
        
        
    else{
        printf("the number is greater then or equal to 100");
    }
}
    
