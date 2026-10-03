
#include <stdio.h>
// int main(){
//     printf("please tner the value of a ");
//     int a ;
//     scanf("%d",&a);
//     int sum=0;
//     for (int i=1;i<=a;i++){
//         sum+=i;
//     }
//     printf("\n%d",sum);

// 
// #include <stdio.h>
// int main(){
//     int a ;
//     printf("enter the value of a ");
//     scanf("%d",&a);
//     int i =0;
//     int sum;
//     sum=0;
//     while(i<=a){
//         sum=sum+i;
//         i++;
        

//     }
//     printf("%d",sum);
// }
int main(){
    int a ;
    printf("plese enter the value of a ");
    scanf("%d",&a);
    int sum=0;
    int i =0;
    do{
        sum=sum+i;
        i++;

    }while(i<=a);
    printf("%d",sum);
}