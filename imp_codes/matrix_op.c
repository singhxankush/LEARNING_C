#include <stdio.h>
int main(){
    int n,m,p,q,selection;
    
    printf("please enter the number of rows :");
    scanf("%d",&n);
    printf("please enter the number of columns");
    scanf("%d",&m);
    char matrix_a[n][m];
    for(int i=0 ; i<n;i++){
        for(int j=0;j<m;j++){
            printf("please enter the element %d %d ",i+1,j+1);
            scanf("%d",&matrix_a[i][j]);
            
            

        }

    }
    printf("matrix a\n");
    for(int i=0 ; i<n;i++){
        for(int j=0;j<m;j++){
            
            
            
            
            printf("%d ",matrix_a[i][j]);

        }
        printf("\n");
    

    }
    
    
    printf("please enter the number of rows of b  :");
    scanf("%d",&p);
    printf("please enter the number of columns of b");
    scanf("%d",&q);
    char matrix_b[p][q];
    for(int i=0 ; i<p;i++){
        for(int j=0;j<q;j++){
            printf("please enter the element %d %d ",i+1,j+1);
            scanf("%d",&matrix_b[i][j]);
            
            

        }

    }
    printf("matrix b \n");
    for(int i=0 ; i<p;i++){
        for(int j=0;j<q;j++){
            
            
            
            
            printf("%d ",matrix_b[i][j]);

        }
        printf("\n");
    

    }
printf("press 1 for addition \n press 2 for subtraction \n press 3 for multiplication\4 press 4 division");
scanf("%d",&selection);
    //addition
    if(selection==1){
        int matrix_c[m][n];
        for(int i =0;i<m;i++){
            for (int j=0;j<m;j++){
                matrix_c[i][j]=matrix_a[i][j]+matrix_b[i][j];

            }
        }
        for(int i =0;i<m;i++){
            for (int j=0;j<m;j++){
                printf("%d ",matrix_c[i][j]);

            }
            printf("\n");
        }

        

    }
    if(selection==2){
        int matrix_c[m][n];
        for(int i =0;i<m;i++){
            for (int j=0;j<m;j++){
                matrix_c[i][j]=matrix_a[i][j]-matrix_b[i][j];

            }
        }
        for(int i =0;i<m;i++){
            for (int j=0;j<m;j++){
                printf("%d ",matrix_c[i][j]);

            }
            printf("\n");
        }
        
        

    }
    //multiplication 
    if (selection ==3){
        for (int i =0;i<n;i++){
            
        }

    }
    
}