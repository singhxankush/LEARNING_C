#include <stdio.h>
int main(){
    int choice;
    int arr[100]={0};

    printf("please enter 1 to book a seat \nplease enter 2 to cancel a seat \nplease enter 3 to sho the seat schema ");
    
    
    while(1){
        
        scanf("%d",&choice);
        if (choice==1){
            for (int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++){
                if (arr[i]==0){
                    arr[i]=1;
                    printf("your seat is %d\n",i+1);
                    break;
                }
            }
        }
        else if  (choice==2){
            int no;
            printf("what is you seat number?\n");
            scanf("%d",&no);
            arr[no-1]=0;
            printf("you seat was canceled\n");

        }
        else{
            printf("seat    status\n");
            for(int i =0;i<=(sizeof(arr)/sizeof(arr[0])-1);i++){
                
                printf("%d     %d ",i+1,arr[i]);
                printf("\n");

        }
    }
    
}
}