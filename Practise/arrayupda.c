#include <stdio.h>
int main(){
    int pos,val;
    int arr[6]={1,2,3,4,5};
    printf("Enter the position :");
    scanf("%d",&pos);
    printf("Enter the value :");
    scanf("%d",&val);
    for(int i =5;i>=pos;i--){
        arr[i]=arr[i-1];

    }
    arr[pos-1]=val;
    for(int i =0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    

    
}