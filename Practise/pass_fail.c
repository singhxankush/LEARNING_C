// pass or fail 
#include <stdio.h>
int main(){
    int a ;
    int b ;
    int c;
    int average ;
    int grade =1;
    printf("please enter the values of a b c i.e marks in three subjects ;");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d%d%d",a,b,c);
    if (a<=33 ){
        grade =0;
        printf("%d",grade );
    }
    if (b<=33){
        grade=0;
        printf("%d",grade );
    }
    if (c<=33){
        grade =0;
        printf("%d",grade );
    }
    if (((a+b+c)/3)<40){
        grade =0;
        printf("%d",grade );
    }
    if (grade==0){
        printf("the person failed his test ");
        }
    else {
        printf("the person passeed his test ");
    }
    
    
    
    
    

}