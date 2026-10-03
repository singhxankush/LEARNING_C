#include <stdio.h>
int main(){
    int a ;
    printf("please enter the vealue of a ");
    scanf("%d",&a);
    for (int i=10 ; i>0;i--){
        printf("%dx%d=%d\n",a,i,a*i);


    }
}