#include <stdio.h>
int main(){
    int is_prime=1;
    int n;
    printf("please enter the value of n :");
    scanf("%d",&n);
    if(n==1){
        printf("The number is neither prime nor composite\n");
    }
    else{
        for(int i=2;i<n/2;i++){

            if(n%i==0){
                is_prime=0;
                break;
            }
        }

        
        
            
    
        if(is_prime==1){
            printf("the number is prime number ");
        }
        else{
            printf("the number is not prime ");
        }
    
    
    
    return 0;

}
}