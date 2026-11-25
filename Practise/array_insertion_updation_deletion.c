#include <stdio.h>
void insertion(int *arr,int n,int val,int ind ){
    
    
    for(int i =n-2;i>=ind;i--){
        arr[i+1]=arr[i];
    }
    arr[ind]=val;
    printf("Updation done ");
}
void display(int *arr,int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void deletion(int *arr,int n,int ind){
    for(int i =ind;i<n;i++){
        arr[i]=arr[i+1];
        arr[n-1]=0;
    }
    printf("Deletion done ");


}
int main(){
    int val,ind,n;
    
    int arr[11]={1,2,3,4,5,6,7,8,9,10};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("please enter the index :");
    scanf("%d",&ind);
    printf("please enter the value ");
    scanf("%d",&val);
    insertion(arr,11,ind,val);
    display(arr,11);
    deletion(arr,11,ind);
    display(arr,11);
    
    
}