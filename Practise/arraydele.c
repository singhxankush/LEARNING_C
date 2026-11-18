#include <stdio.h>
int main(){
    int arr[6]={1,2,3,4,5};
    int pos ;
    printf("Enter the posiotnn you want to delete");
    scanf("%d",&pos);
    for(int i =pos-1;i<=5;i++){
        arr[i]=arr[i+1];
    }
    for(int i =0;i<4;i++){
        printf("%d ",arr[i]);
    }
}