#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int half=(sizeof(arr)/sizeof(arr[0]))/2;
    int temp=0;
    for(int i =0;i<half;i++){
        temp=arr[half*2-i];
        
        
        arr[half*2-i]=arr[i];
        arr[i]=temp;
    }
    for(int i =0;i<5;i++){
        printf("%d ",arr[i]);
    }

}