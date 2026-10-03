#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int pos;


    printf("please enter  the positon to be deleted ");
    scanf("%d",&pos);
    for (int i =pos ;i<=(sizeof(arr)/sizeof(arr[0]));i++){
        arr[i]=arr[i+1];
    }
    arr[4];
    for(int i =0;i<(sizeof(arr)/sizeof(arr[0])-1);i++){
        printf("%d",arr[i]);
    }

 
}