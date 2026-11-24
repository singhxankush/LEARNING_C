#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,highest,lowest;
    float sum=0;
    int *p;
    printf("please enter the nuumber of students :");
    scanf("%d",&n);

    p=malloc(n*sizeof(int ));
    if(p==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    for(int i =0;i<n;i++){
        printf("enter marks of student %d:",i+1);
        scanf("%d",&p[i]);
    }
    highest=p[n-1];
    lowest=p[0];
    for(int i =0;i<n;i++){
        if (p[i]>highest){
            highest=p[i];
        }
        if (lowest>p[i]){
            lowest=p[i];
        
        }
        sum+=p[i];
    }
    printf("the highest marks are %d\n",highest);
    printf("the lowest marks are %d\n",lowest);
    printf("the average is %f",(sum/n));
    free(p);



    

}