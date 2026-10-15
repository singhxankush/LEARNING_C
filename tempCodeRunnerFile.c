#include <stdio.h>
char* to_up(char str[100]);
char result[100];
char string[]="ankush";
int last=0;
int main(){
    
    printf("please enter the string ");
    scanf("%s",&string);
    printf("%s",to_up(string));
}
char* to_up( char str[100]){
    
    for(int i =0;i<sizeof(string)/sizeof(str[0]);i++){
        result[i]=str[i]-32;
        last =i;
    }
    printf("%d",last);
    result[last]='\0';
    return result ;
}