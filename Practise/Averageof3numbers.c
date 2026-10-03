#include <stdio.h>
float average( int a ,int b ,int c);
float ctof(int c);
float g ( int a);
int main(){
    int a;
    printf("please enter the value of a");
    scanf("%d",&a);
    printf("The force of gravity for mass %d is %f",a,g(a));
    

    
}
float average(int a,int b,int c){
    return((a+b+c)/3.0);
}
float ctof(int a ){
    int conv;
    conv=(9/5.0)*a+32;
    return conv;

}
float g(int a ){
    
    return a*9.8 ;
}