#include <stdio.h>
int main(){
    int n =0;
    int temp=0;
    printf("please enter the number of elements in array");
    scanf("%d",&n);
    int num_arr[n];
    for(int i =0;i<n;i++){
        printf("\nenter the element %d ",i+1);
        scanf("%d",&num_arr[i]);
    }
    printf("the original array ");
    for(int i =0;i<n;i++){
        
        printf("%d ",num_arr[i]);
    }

    //reversing an array 

    for(int i =0;i<n;i++){
        if((n-i-1)>(n-1)/2.0){
            int temp=num_arr[n-i-1];
            num_arr[n-i-1]=num_arr[i];
            num_arr[i]=temp;
        }
        
    }
    printf("\nthe reversed array ");
    for(int i =0;i<n;i++){
        printf("%d ",num_arr[i]);
    }
    // i=0
    // while(n-i+1=n/2.0 ){

    // }
}
