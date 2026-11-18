#include <stdio.h>
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    int x =5,y=7;
    swap(&x,&y);
    printf("after swapped %d%d",x,y);
}