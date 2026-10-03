#include <stdio.h>
int main(){
     char arr[5]={1,2,3,36,50};
     int l=arr[1];
     int s_l=arr[0];
     for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if(arr[i]>l){
            s_l=l;
            l=arr[i];
            
        }
        else if (arr[i]>s_l){
            s_l=arr[i];

        }
     }
     printf("the second largest number in array is %d",s_l);

}