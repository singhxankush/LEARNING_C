#include <stdio.h>
#include <string.h>
#pragma pack(1)
struct student{
        char name[40];
        char s;
        
        int roll_no;

};
struct student fun(){
    struct student s1={"ankush",34};
    return (s1);

}

int main(){
    struct student s1=fun();
    printf("%s %d",s1.name,s1.roll_no);
    struct student s2=fun();
    printf("%s %d\n",s2.name,s2.roll_no);
    printf("%d",sizeof(struct student ));

    
}