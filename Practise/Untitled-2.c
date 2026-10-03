#include <stdio.h>
#include <string.h>
int main(){
    //peforming string function using string.h header file 
    //strlen
    char a_1[]="hello";
    char a_2[]="456789yfvbnjhgvd";
    char a_3[100];
    
    // printf("%d\n",strlen(a_1));
    // printf("%d",sizeof(a_1));
    // printf("%d",strlen(a_2));
    // printf("\n%d",sizeof(a_2));
    // strcpy(a_3,a_2);
    // printf("%s",a_3);
    // strcpy(a_2,a_1);
    // printf("%s",a_2);


    // int result=strcmp(a_1,a_2);
    // printf("%d",result);
    // for (int i =0;i<5;i++){
    //     printf("%p\n",&a_1[i]);
    // }
   printf("%ld",strchr(a_1,'e'));

    
}