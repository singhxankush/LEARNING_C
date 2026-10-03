#include <stdio.h>
int main(){
    int a=8 ;
    int sum=0;
    printf("pelase enter the value of a ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        sum=sum+(a*i);
        printf("%d\n",sum);
    }
    printf("%d",sum);

}