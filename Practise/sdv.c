#include <stdio.h>

float sum(float a ,float b ,float c );
;
int main(){
    float a,b,c;
    a=10;
    b=34.2;
    c=3.2;
    printf("the average of a,b,c is %f",(sum(a,b,c)/3));

}

float sum(float a , float b , float c){
    return a+b+c;

}