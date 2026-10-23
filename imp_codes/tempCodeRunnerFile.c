#include <stdio.h>
#include <string.h>
int main(){
    //performing all string function using <string.h> header file 16/10/2026

    char arr[]="Hi!,Welcome to my github repo.";
    char dest[]="Hello";
    char src[]="World";
    printf("%d",strlen(arr));

    //using str  copy function 
    // printf("\narr dest before using function %s",dest);
    // strcpy(dest,src);
    // printf("\narr dest after using function %s",dest);// strcpy truncates all content of destination string
     
    printf("\narr dest before using function %s",dest);
    strncpy(dest,src,2);
    printf("\narr dest after using function %s",dest);// strcpy truncates all content of destination string
     
}