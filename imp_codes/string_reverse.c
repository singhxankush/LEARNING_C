#include <stdio.h>
int main(){
    char arr[]="my name is ankush ";
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<size/2;i++){
        int temp=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=temp;
    }
    for(int i =0;i<size;i++){
        printf("%c",arr[i]);
    }

}