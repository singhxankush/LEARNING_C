#include <stdio.h>
int main(){
    int m,n;
    printf("please enter the number of rows and columns ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[]={{0,0},{0,0}};
    int w;
    for(int i =0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("enter the value of a[%d][%d]",i+1,j+1);
            scanf("%d",&w);
            a[i][j]=w;
        }
    }
    for(int i =0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("enter the value of B[%d][%d]",i+1,j+1);
            scanf("%d",&w);
            b[i][j]=w;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}