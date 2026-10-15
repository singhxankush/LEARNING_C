#include <stdio.h>
int main(){
    //inserting elements in array 
    int arr[6]={1,2,3,4,5};
    int pos;
    int num;
    printf("please enter the position where you want to enter : ");
    scanf("%d",&pos);
    printf("please enter the elemtns ");
    scanf("%d",&num);
    for(int i =5;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    printf("the modified array is ");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}