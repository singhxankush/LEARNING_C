#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("enter rows and column of matrix a");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and column of matrix b");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("matrix multiplication not possible\n");
        return 0;
    }
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];
    for(int i =0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("enter the elemnt a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("enter the elemnt b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i =0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}