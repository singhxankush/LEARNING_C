# include <stdio.h>
int main(){

    int n ;
    int fact=0;
    printf("please enter the value of n ");
    scanf("%d",&n);
    for(int i =1;i<n;i++){
        if (n%i==0){
            fact+=i;

        }
    }
    if (fact==n){
        printf("it is a pefect number ");
    }
    else {
        printf("it is not a perfect numeber");
    }
    
}