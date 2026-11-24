#include <stdio.h>
void display(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }}
void display_ptr(int *x,int n){
    for(int i =0;i<5;i++){
        printf("%d ",x[i]);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    display(arr,5);
    display_ptr(&arr[0],5);


}