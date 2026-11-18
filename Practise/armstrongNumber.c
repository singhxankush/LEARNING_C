#include <stdio.h>
#include <math.h>
int main(){
    int x =153;
    int temp=x;
    int count=0,sum =0;
    while(temp>0){
        count++;
        temp=temp/10;

    }
    temp=x;
    for(int i =0;i<count;i++){
        sum+=round(pow(temp%10,count));
        temp=temp/10;

    }
    
    if(sum==x){
        printf("armstrong%d",sum);
    }

    

}