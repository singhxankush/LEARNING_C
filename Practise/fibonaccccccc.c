#include <stdio.h>
int  recur(int n ){
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    return recur(n-1)+recur(n-2);
}
int main(){
    int n ;
    printf("please enter the vlaue of n ;");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d",recur(i));

    }
}
