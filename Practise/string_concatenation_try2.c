#include <stdio.h>
int main(){
    char arr_1[100]="my name is ankush ";
    char arr_2[40]="I am 19 years old. ";
    int i=0;
    int j=0;
    while(arr_1[i]!='\0'){
        i++;
    }
    while(arr_2[j]!='\0'){
        arr_1[i]=arr_2[j];
        j++;
        i++;

    }
    int p=0;
    while(arr_1[p]!='\0'){
        printf("%c",arr_1[p]);
        p++;

    }

}