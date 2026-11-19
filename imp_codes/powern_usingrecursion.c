#include <stdio.h>
int pow_n(int x, int y ){
    if (y==0){
        return 1;
    }
    else {
        return x*pow_n(x,y-1);
    }
}
int main(){
    printf("%d",pow_n(2,5));

}