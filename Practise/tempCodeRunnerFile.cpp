#include <iostream>
int main(){
    float p;
    float r;
    float t;
    printf("Hey! This is the program to claculate simple interest:\n");
    printf("Please enter the principal\n");
    scanf("%f",&p);
    printf("Please enther the rate \n");
    scanf("%f",&r);
    printf("Please enter the time \n");
    scanf("%f",&t);
    float interest;
    interest=(p*r*t)/100;
    printf("The interest on %f for the time period %f for the rate %f is%f ;",p,t,r,interest);

}