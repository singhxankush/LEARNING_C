#include <stdio.h>
#include <math.h>
int n_digits(int x ){
    int digit=0;
    while(x>0){
        digit++;
        x/=10;
    }
    return digit;

}
int main(){
    int n ;
    
    printf("please enter the value of n ");
    scanf("%d",&n);
    int temp=n;
    int digits=n_digits(n);
    int new_n=0;
    for(int i =1;i<=digits;i++){
        new_n=new_n+(int)round(pow(temp%10,digits));
        temp=temp/10;

    }
    printf("%d",new_n);
    if (new_n ==n){
        printf("it is a armstrong number ");
    }
    else{
        printf("it is not a armstrong number;");
    }


    
}