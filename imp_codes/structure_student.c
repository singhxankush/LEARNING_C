#include <stdio.h>
#include <string.h>
struct student {
    char name[40];
    int roll_no;
    int marks;

};
void display(struct student *x){
    printf("--------------------------------------------Details-------------------------------------------\n");
    printf("the name is %s\n",x->name);
    printf("the roll no is %d\n",x->roll_no);
    printf("the marks are %d\n",x->marks);

}
int main(){
    struct student s[3];
    strcpy(s[0].name,"ANKUSH ");
    s[0].roll_no=15;
    s[0].marks=100;
    display(&s[0]);

    strcpy(s[1].name,"AYUSH ");
    s[1].roll_no=16;
    s[1].marks=98.5;
    display(&s[1]);

    strcpy(s[2].name,"ADITYA");
    s[2].roll_no=14;
    s[2].marks=99;
    display(&s[2]);



}