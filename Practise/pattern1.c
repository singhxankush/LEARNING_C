
#include <stdio.h>

int main()
// {
//     int n ;
//     printf("please enter the value of n \n");
//     scanf("%d",&n);
//     int i =0;
//     while( i <=n){
//         printf("%d\n",i);
//         i++;
//     }
    
// }
{
    int n =45;
    // int o=n;

    for(int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i =n-1;i>0;i--){

        for(int j =i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }


}