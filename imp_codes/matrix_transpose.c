#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("enter rows and column of matrix a");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    int c[c1][r1];

    for(int i =0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("enter the elemnt a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i =0;i<c1;i++){
        for(int j=0;j<r1;j++){
            c[i][j]=a[j][i];
        }
    }
    
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}