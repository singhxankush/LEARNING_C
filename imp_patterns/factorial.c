#include <stdio.h>
int fact(int x );
int main(){
    int n;
    printf("please enter the value of n :");
    scanf("%d",&n);
    printf("the factorial is %llu",fact(n));
    return 0;


}
int fact(int x ){
    if (x==1||x==0){
        return 1;
    }
    // int result=;
    // printf("%d\n",result);
    return x*fact(x-1);

}