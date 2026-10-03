# include<stdio.h>
int main(){
    int a ;
    printf("please enter the value of a ",&a);
    scanf("%d",&a);
    for (int i=0;i<=a;i++){
        printf("the integer is %d\n",i);
    }
}