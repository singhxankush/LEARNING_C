#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("please enter the value of abcd");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b&&a>c&&a>d){
        printf(" a is greater ");
    }
    else if (b>a&&b>c&&b>d){
        printf("b is greater ");
    }
    else if (c>a&&c>b&&c>d){
        printf("c is greater ");
    }
    else {
        printf("d is greatest");
    }
}