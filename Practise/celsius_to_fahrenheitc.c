#include <stdio.h>//The program to convert degree celsius to degree fahrenheit
int main(){
    float c;
    float f ;
    printf("please enter the value of degree celsius ");
    scanf("%f",&c);
    f =((9.0/5)*c)+32;
    printf("the vale of temps in fahrenheit scale is %f",f);
    return 0 ;


}