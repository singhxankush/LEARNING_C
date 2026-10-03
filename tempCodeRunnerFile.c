#include <stdio.h>
int sum(int x,int y);

int main(){
    
    printf("%d",sum(2,4));
    printf("%d",sum(2,10));

}

int sum(int x,int  y){
    int sum=x+y;
    return sum;
}