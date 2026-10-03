# include <stdio.h>
int main(){
    int length;
    int breadth;
    printf("This is the program to calculate the area of rectangle:");
    printf("Please enter the length of the rectangle; ");
    printf("Please enter the breadth of the rectangle");
    scanf("%d",&length);
    scanf("%d",&breadth);
    printf("The area of rectangle is :",length*breadth);
    return 0;
}