#include <stdio.h>
int main(){
    int n=15;
    int m=1;
    for (int i =1;i<=n;i++){
        for(int j =0;j<i;j++){
            printf("%d ",m);
            m++;

        }
        printf("\n");


    }
}