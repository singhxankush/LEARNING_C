# include <stdio.h>
// int fact(int n);
// int main(){
//     int n=5;
//     printf("the factorial of %d is %d",n,fact(n));

// }
// int fact(int n ){
//     if (n==1){
//         return 1;
//     }
//     else {
//         return n *fact(n-1);
//     }
// }

// using loops
int main(){
    int n =5;
    int j =1;
    int fact=1;
    while (j<=n){
        fact=fact*j;
        j++;

    }
    printf("the factorial is %d ",fact);
}