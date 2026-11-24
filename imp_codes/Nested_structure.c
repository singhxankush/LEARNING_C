#include <stdio.h>
#include <string.h>

struct dob{
    int  day;
    int month;
    int year;
};
struct student{
    int roll_no;
    char name[40];
    int marks;
    struct dob d;
};
void display(struct student *x ){
    
    printf("---------------------------------Details-----------------------------------------------\n");
    printf("Name: %s\n",x->name);
    printf("RollNO: %d\n",x->roll_no);
    printf("Dob: %d\\%d\\%d\n",x->d.day,x->d.month,x->d.year);
    printf("marks: %d",x->marks);
}



int main(){
    struct student s1;
    s1.roll_no=43;
    strcpy(s1.name, "ankush");
    s1.marks=100;
    
    s1.d.month=12;
    s1.d.day=30;
    s1.d.year=2006;
    struct student *ptr=&s1;
    display(ptr);
    

}