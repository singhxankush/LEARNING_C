#include <stdio.h>
#include <string.h>
int main(){
    
    char arr[4];
    char arrs[4];
    for(int i =0;i<3;i++){
        printf("enter the element  :");
       
        scanf(" %c",&arr[i]);
    }
    arr[3]='\0';
    printf("enter the string ");
    scanf("%s",arrs);

    for(int i =0;i<3;i++){
        printf("%c",arr[i]);
    }
    printf("%d",strcmp(arrs,arr));

}