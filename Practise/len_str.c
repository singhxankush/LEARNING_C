#include <stdio.h>
float calc(float x , float y,int act );
int main(){
    int n;
    float x,y;
    printf("please enter the two numbers  ");
    scanf("%f%f",&x,&y);

    printf("please select 1 for additions \n please select 2 for substraction\n please select 3 for mul\n please select 4 for div");
    scanf("%d",&n);
    printf("%f",calc(x,y,n));
}

float calc(float x , float y , int act){
    if (act==1){
        return x+y;
    }
    else if (act==2){
        return x-y;
    }
    else if (act==3){
        return x*y;
    }
    else {
        return x/y;
    }
}