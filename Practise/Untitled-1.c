#include <stdio.h>
#include <string.h>
int main(){
    char arr[]="my name&*88 is ankush singh ";
    for(int i =0;i<strlen(arr);i++){
        // printf("%d ",arr[i]);
        if (arr[i]>='a'&&arr[i]<='z'){
            arr[i]=arr[i]-32;

        }
        
    }
    printf("%s",arr);



    
   
   
}