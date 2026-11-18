
#include <stdio.h>
int main(){
    char str_1[1000]="my name is ankush ";
    char str_2[]="i am 19 years old ";
    int i=0,j=0;
    while(str_1[i]!='\0'){
        i++;

    }
    while(str_2[j]!='\0'){
        str_1[i]=str_2[j];
        j++;
        i++;
    }
    int q=0;
    while(str_1[q]!='\0'){
        printf("%c",str_1[q]);
        q++;
    }
    

}