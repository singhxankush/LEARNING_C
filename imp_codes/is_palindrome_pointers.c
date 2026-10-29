#include <stdio.h>
#include <math.h>
int n_digit(int *p1);
int is_armstrong(int *p2);
int main(){
    int n =153;
    // printf("the number of digits are %d",n_digit(&n));
    if (is_armstrong(&n)){
        printf("%d is a palindrome",n);
    }
    else{
        printf("it is not a palindrome");
    }

    
}
int n_digit(int *p1){
    
    int n=*p1;
    int count =0;
    while(n>0){
        count ++;
        n=n/10;
    }
    return count;

}
int is_armstrong(int *p2){
    int digit=n_digit(p2);
    int sum=0;
    int n =*p2;
    while(n>0){
        sum+=(int )round(pow((n%10),digit));
        n=n/10;
    }
    
    if (sum==*p2){
        return 1;
    }
    else{
        return 0;
    }
}