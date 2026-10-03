#include <stdio.h>
int main(){
    int n;
    printf("please enter the value of n ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j =0;j<=i;j++){
            printf("%c",65+j);
        }
    printf("\n");
    }
}
