#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr,n,temp=0;
    printf("please enter the value of n :");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(n));
    for(int i =0;i<n;i++){
        printf("enter the number %d",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n-1-i;j++){
            if(ptr[j]>ptr[j+1]){
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;

            }
        }
    }
    for(int i =0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    

}