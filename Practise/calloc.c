#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p=(int*)calloc(5,sizeof(int));
    printf("values using calloc:\n");
    for(int i =0;i<5;i++){
        printf("%d ",p[i]);
    }
    for(int i =0;i<5;i++){
        p[i]=i+5;
    }
    for(int i =0;i<5;i++){
        printf("%d ",p[i]);
    }
    free(p);
    
    
    return 0;
}