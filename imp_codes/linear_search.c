#include <stdio.h>
int main(){
    int n ;
    printf("how many elemtns you want to enter\n");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int find,index,found;
    found =0;
    printf("Enter the elments you want to find ");
    scanf("%d",&find);
    for(int i =0;i<n;i++){
        if (arr[i]==find){
            printf("\nElement was found at index  %d",i);
            found =1;
            
            break;
        }

    }
    if (found==0){
        printf("The element was not found ");
    }


}