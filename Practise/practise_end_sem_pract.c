#include <stdio.h>
int sum_digit_recur(int x ){

    if (x==0){
        return 0;
    }
    else {
        return x%10+sum_digit_recur(x/10);
    }
}
int main(){
    printf("%d",sum_digit_recur(541));
    

}