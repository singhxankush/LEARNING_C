#include <stdio.h>
#include <string.h>
struct sal{
    int net;
    int base;
    int bonus;
    

};
struct emp{
    char name[40];
    int age ;
    struct sal s;
    
};
void display(struct emp *gen ){
    printf("-----------------------------Details-----------------------------\n");
    printf("Name: %s\n",gen->name);
    printf("Age: %d\n",gen->age);
    printf("Net pay: %d\n",gen->s.net);
    printf("Base pay: %d\n",gen->s.base);
    printf("Bonus: %d\n",gen->s.bonus);

}
int main(){
    struct emp e1,e2,e3;
    strcpy(e1.name,"Ankush Singh");
    e1.age=23;
    e1.s.net=350000;
    e1.s.base=272000;
    e1.s.bonus=e1.s.net-e1.s.base;

    strcpy(e2.name,"Omkar kun");
    e2.age=23;
    e2.s.net=275000;
    e2.s.base=195000;
    e2.s.bonus=e2.s.net-e2.s.base;
    
    strcpy(e3.name,"Dheeraj Singh");
    e3.age=22;
    e3.s.net=250000;
    e3.s.base=200000;
    e3.s.bonus=e3.s.net-e3.s.base;
    
    display(&e1);
    display(&e2);
    display(&e3);



}