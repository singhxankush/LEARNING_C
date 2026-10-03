#include<stdio.h>
int main(){
    int age ;
    char name[30];
    int uid;
    printf("hey there please enter you age : ");
    scanf("%d",&age);
    printf("now enter the name ;");
    scanf("%s",&name);
    printf("now enter uid");
    scanf("%d",&uid);
    printf("you name is %s your uid is %d and you age is %d",name,uid,age);
    return 0;


}