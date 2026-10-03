#include <stdio.h>
int main(){
    char alphabet ='';
    
    if (alphabet>=97&&alphabet<=122){
        printf("it is lowercase ");
    }
    else{
        printf("this is uppercase ");
    }
}
// c stores characters in the form of ascii values and when we use format specifier it converts it that is why %c give the character while %d give the ascii value