#include <stdio.h>
int main(){
    //fibonaaci printer
    int n ;
    printf("please enter the value of n :");
    scanf("%d",&n);
    int i =0;
      int fibb_curr=1;
      int fibb_prev=0;
    
    while(i<n){
        if (i==0){
            printf("%d",0);
            

        }
        else if(i==1){
            printf("%d",1);
            

        }
        else{
          
            int temp=fibb_curr+fibb_prev;
            printf("%d ",temp);
            fibb_prev=fibb_curr;
            fibb_curr=temp;
            
        }
        i++;
    }
    
}