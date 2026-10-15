#include <stdio.h>
int main(){
    int n ;

    printf("pleae enter the number of elements ");
    scanf("%d",&n);
    int arr[n];

    for(int i =0;i<n;i++){
        printf("enter the element%d",i+1);
        scanf("%d",&arr[i]);
    }
    int largest=arr[1];
    int second_largest=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        if (arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }

    printf("the larges is %d and second largest is %d\n",largest , second_largest);
    
}
}