// write a program to calculate the average of 5 subjects
#include <stdio.h>
int main(){
    float a,b,c,d,e;
    printf("Please enter the first subjects ;");
    scanf("%f",&a);
    printf("please enter the second subject;");
    scanf("%f",&b);
    printf("please enter the third subject;");
    scanf("%f",&c);
    printf("please enter the fourth subject :");
    scanf("%f",&d);
    printf("please enter the fifth subject;");
    scanf("%f",&e);
    // printf("%f%f%f%f%f",a,b,c,d,e);
    
    float avg;
    avg=(a+b+c+d+e)/5;
    printf("the average is :%f",avg);
    return 0;
}