# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(){
    int a ;
    int guess=0;
    int random;
    srand(time(NULL));
    random=(rand()%100+1);
    
    
    while(1){
        printf("What is your guess? ");
        scanf("%d",&a);
        if (a>random){
            printf("please enter a lower number:\n");
            guess+=1;
        }
        else if (a<random){
            printf("please enter a higher number:\n");
            guess+=1;
        }
        else{
            guess+=1;
            printf("You Won!,\nYour guess count is %d\n",guess);
            break;
        }
    }


}