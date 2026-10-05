//WRITE A PROGRAM TO FIND THE LARGEST OF TWO NUMBERS USING FUNCTION

#include <stdio.h>
int lar_n(int x ,int y );
int main(){
    int x,y;
    printf("please enter the two numbers ");
    scanf("%d%d",&x,&y);
    printf("the largest of wo number is %d",lar_n(x,y));
    return 0;
}
int lar_n(int x ,int y ){
    if (x>y){
        return x;
    }
    else if (x<y){
        return y;
    }
    else{
        return 0;
    }

}