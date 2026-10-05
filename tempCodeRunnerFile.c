#include <stdio.h>
char* to_up(char str[100]);
int main(){
    char str[100];
    printf('please enter the string ');
    scanf("%d",&str);
    printf("%s",to_up(str));
}
char* to_up( char str[100]){
    char new[100];
    for(int i =0;i<sizeof(str)/sizeof(str[0]);i++){
        new[i]=str[i]+32;
    }
    return new ;
}