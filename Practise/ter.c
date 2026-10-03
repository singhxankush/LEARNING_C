#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("please enter the value of abcd");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    (a>=b)&&(a>=c)&&(a>=d)?
    printf("a is greater "):(b>=a)&&(b>=c)&&(b>=d)?
    printf("b is greater "):(c>=a)&&(c>=b)&&(c>=d)
    ?printf("c is greater "):printf("d is greater ");
    return 0;
}