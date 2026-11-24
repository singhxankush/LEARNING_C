#include <stdio.h>
#include <string.h>
union student{
    char name[40];
    int roll_no;
    int dob;

};
int main(){
    union student s1;
    strcpy(s1.name,"Ankush");
    
    printf("%s ",s1.name);
    s1.roll_no=15;
    
    printf("%d ",s1.roll_no);
    
    s1.dob=30;
    printf("%d",s1.dob);
    printf("The size of union is %d",sizeof(union student));
    
    

}