//write a program to print reverse  an integer number using loops
#include<math.h>
#include <stdio.h>
int main(){
    int i;
    printf("please enter the value if i ");
    scanf("%d",&i);
    int n =i;
    while(n>=0){
        printf("%d",n%10);
        n=(i/10);

    }
}