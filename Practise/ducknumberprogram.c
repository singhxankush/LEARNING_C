//program to check if it is a duck numbero or not 
#include <stdio.h>
int main(){
    int n ;
    int temp;
    int value =0;
    printf("please enter the value of n ");
    scanf("%d",&n);
    temp=n;
    while(temp>0&&value==0){
        if (temp%10==0){
            value=1;
        }
        else{
            temp=(int)temp/10;
            printf("%d\n",temp);

        }

    }
    if (value==1){
        printf("it is a duck nubmer ");

    }
    else{
        printf("it is not a duck number ");
    }
    return 0;
}
