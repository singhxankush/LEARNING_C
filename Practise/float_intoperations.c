#include <stdio.h>
int main(){
    float n;
    printf("please enter a float nubmer : ");
    scanf("%f",&n);
    int int_n;
    int_n=(int)n;
    printf("the sum of int_n and float n is%f \n",n+int_n);
    printf("the differencde of float n and int_n is%f\n ",n-int_n);
    printf("the mul of float n and int_n is%f \n",n*int_n);
    printf("the div of n and int_n is %f\n",n/int_n);
    return 0;

}