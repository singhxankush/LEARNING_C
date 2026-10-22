#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d ",&arr);
    printf("%d ",&arr[0]);
    printf("%d ",&arr[1]);
    printf("%d ",&arr[2]);
    printf("%d ",&arr[3]);
    printf("%d\n ",&arr[4]);

    void *base_add=(void *)&arr;
    for(int i=0;i<5;i++){
        printf("the add of  element at index %d is %d\n",i,(char *)base_add+4*i);
    }


}
