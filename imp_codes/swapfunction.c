#include <stdio.h>
int swap(int *a,int *b);
int main(){
    int a =4; 
    int b =8;
    swap(&a,&b);
    printf("the values after swap(function),%d%d",a,b);

    
    
    

}
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}