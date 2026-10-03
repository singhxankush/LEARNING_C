#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    char string_s[100];
    int validate=1;
    
    printf("please enter the value of  integer");
    scanf("%d",&a);
    if (sizeof(a )==sizeof(int)){
        printf("this is integer");
    }
    else{
        printf("you entered invalid value");
    
    }
    printf("please enter the value of float b");
    scanf("%f",&b);
    if(sizeof(b)==sizeof(float)){
        printf("this is float value ");

    }
    else{
        printf("you entered invalid value ");

    }
    printf("please enter character c ");
    scanf("%c",&c);
    if(sizeof(c)==sizeof(char)){
        printf("Valid");
    }
    else{
        printf("Invalid value ");
    }
    printf("enter string value");
    scanf("%s",&string_s);
    if(sizeof(string_s)==sizeof(string)){
        printf("valid");
    }
    else{
        printf("invalid");
    }
    return 0;

}