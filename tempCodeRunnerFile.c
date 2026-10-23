#include <stdio.h>
int times_10(int *a){
    *a=10*(*a);
    printf("%d",*a);
}
int main(){
    int i =100;
    times_10(&i);

}