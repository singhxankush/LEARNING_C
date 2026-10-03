#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    while(1){
        int a ;
        srand(time(NULL));
        int b=rand();
        printf("Value of rand%d\n",b);
        printf("Value of rand %d\n",b%100);
    }
}
//     a=(b%100+1);
//     int no_guesses=0;
//     int guessed=0;
//     int n;
//     while(1){
//         printf("Your Guess\n");
//         scanf("%d",&n);
//         if(n==a){
//             no_guesses+=1;
//             printf("You Guessed the numbers in %d guesses\n",no_guesses);
            
//         }
//         else if (n>a){
//             printf("please enter a smaller number\n");
//             no_guesses+=1;
//         }
//         else{
//             printf("pleae enter a greater number\n");
//             no_guesses+=1;
//         }
        
//     }
// }