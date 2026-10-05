#include <stdio.h>
int area_s(int x);
int main(){
    int n ;
    printf("please enter the side of square : ");
    scanf("%d",&n);
    printf("the area of square is %d",area_s(n));
}
int area_s(int x ){
    return x*x;
}