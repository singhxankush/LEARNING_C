#include <stdio.h>
int main(){
    int n,m;
    
    printf("please enter the number of rows n  ");
    scanf("%d",&n);
    printf("please enter the number of columns ");
    scanf("%d",&m);
    int a[n][m];
    // creating matrix
    for (int i =0;i<n;i++){
        for (int j =0;j<m;j++){
            printf("please enter the value of a[%d][%d]:",i+1,j+1);
            scanf("%d",&a[i][j]);

        }
    }
    //displaying the values 
    for (int i =0;i<n;i++){
        printf("[");
        for (int j =0;j<m;j++){
            
            printf("%d",a[i][j]);
            
        }
        
        printf("\n");
    }

    

}