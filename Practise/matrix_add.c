#include <stdio.h>
int main(){
    int m=2;
    int n=2;
    int a[m][n];
    int b[m][n];
    int c[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element %d%d",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element %d%d",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            

        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }
}