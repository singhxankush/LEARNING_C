#include <stdio.h>
int sum(int x ){
    if (x==0){
        return 0;
         
    }
     return (x%10)+sum(x/10);
    
}
int main(){
    printf("%d",sum(5343467));

}