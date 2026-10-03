#include<stdio.h>

int main()
{
    int raws,colm ;
    int A[10][10],B[10][10],C[10][10];
    int i,j;

    printf("enter the number of raws : \n");
    scanf("%d",&raws);

    printf("enter the number of columns : \n");
    scanf("%d",&colm);

    printf("for matrix A : \n");

    for(i=0;i<raws;i++)
    {
        for(j=0;j<colm;j++)
        {
        scanf("%d",&A[i][j]);
        }
    }
    int row_a=raws;
    int columns_a=colm;
    

    printf("for matrix B : \n");
    printf("enter the number of raws : \n");
    scanf("%d",&raws);

    printf("enter the number of columns : \n");
    scanf("%d",&colm);


    for(i=0;i<raws;i++)
    {
        for(j=0;j<colm;j++)
        scanf("%d",&B[i][j]);
    }
    int row_b=raws;
    int column_b=colm;

    if ((row_a==row_b)&&(column_b==columns_a)){
        
        for(i=0;i<raws;i++)
        {
            for(j=0;j<colm;j++){
                C[i][j]=A[i][j] + B[i][j];
            }
            
        }

    

    //for shoing matrix

        printf("Matrix A : \n");

        for(i=0;i<raws;i++)
        {
            for(j=0;j<colm;j++)
            printf("%d \t",A[i][j]);
            printf("\n");
        }
        printf("\n");

        printf("Matrix B : \n");

        for(i=0;i<raws;i++)
        {
            for(j=0;j<colm;j++)
            printf("%d \t",B[i][j]);
            printf("\n");
        }
        printf("\n");

        printf("Matrix C : \n");

        for(i=0;i<raws;i++)
        {
            for(j=0;j<colm;j++)
            printf("%d \t",C[i][j]);
            printf("\n");
        }
        printf("\n");
        
    

    }
    else{
        printf("this is not possible");
    }
}
    