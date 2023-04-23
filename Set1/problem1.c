// Area of the circle

#include<stdio.h>

float area_circle(int r);

int main(){
    float r;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    printf("The area of the circle is : %f", area_circle(r));

    return 0;
}

float area_circle(int r){
    float a;
    a = 3.14*r*r;
    return a;
}