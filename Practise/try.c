#include <stdio.h>
int main(){
    int n,sum=0;
    printf("please enter the NUMBER OF SUBS");
    scanf("%d",&n);


    int a[n];
    for(int j=0; j<n;j++){
        printf("Enter THE MARKS OF SUB  %d:",j+1);
    scanf("%d",&a[j]);


    }
    for (int i =0; i<n;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    printf("the average is : %d",sum/(sizeof(a)/sizeof(a[0])));
    

}