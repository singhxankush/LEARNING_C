#include <stdio.h>
int ndigit(int x ){
    if (x==0){
        return 0;

    }
    else {
        return 1+ndigit(x/10);
    }
}
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("the total digits are %d",ndigit(n));

}