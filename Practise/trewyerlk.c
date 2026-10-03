#include <stdio.h>
#include <string.h>
int main(){
    char src[6]="hello";
    char dest[2];
    strcat(dest,src);
    printf("%s",src);
    printf("\n%s",dest);

}