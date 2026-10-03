# include <stdio.h>
int main(){
    int radius;
    printf("please enter the radius of circle :");
    scanf("%d",&radius);
    float height;
    printf("please enter the height of the cone ");
    scanf("%f",&height);
    float area;
    area=3.14*radius*radius;
    printf("The area of this circle is :%.2f",area);
    printf("the volume of cone is %f",(area*height)/3);
    return 0;
}