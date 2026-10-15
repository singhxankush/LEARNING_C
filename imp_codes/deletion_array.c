#include <stdio.h>
int main(){
    int pos;
    int arr[5]={1,2,3,4,5};
    printf("please etner the element you want to delte ");
    scanf("%d",&pos);
    for(int i=pos-1;i<5;i++){
        arr[i]=arr[i+1];

    }
    for(int i =0;i<4;i++){
        printf("%d",arr[i]);
    }
}