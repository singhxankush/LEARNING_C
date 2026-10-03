#include <stdio.h>
int main(){
    int n ;
    int pos;
    int arr[6]={1,2,3,4,5};
    printf("please enter the nubmer and the positoin ");
    scanf("%D%d",&n,&pos);
    for(int i=4;i>=pos;i--){
        arr[i+1]=arr[i];

    }
     arr[pos]=n;
    printf("[");
    for(int i =0;i<6;i++){
        printf("%d ",arr[i]);

        

    }
    printf("]");
}