//Type of Triangle

#include<stdio.h>
#include<math.h>
void triangle(double a, double b, double c);
int main(){
    double a,b,c;
    printf("Enter the 1st side : ");
    scanf("%lf", &a);
    printf("Enter the 2nd side : ");
    scanf("%lf", &b);
    printf("Enter the 3rd side : ");
    scanf("%lf", &c);

    triangle(a,b,c);
    return 0;
}
void triangle(double a,double b,double c){

    if(a == b && b == c){
        printf("equilateral triangle");
    }
    else if(a == b || b == c || a == c){
        printf("Isoscales triangle");
    }
    else if(a != b && b != c && a != c){
        if(a*a+b*b == c*c || b*b+c*c == a*a || c*c+a*a == b*b)
        {
            printf("Right angled scalene Triangle");
        }
        else if(a+b == c || b+c == a || c+a == b)
        {
            printf("Triangle cannot be formed");
        }
        else if(a+b < c || b+c < a || c+a < b)
        {
            printf("Triangle cannot be formed");
        }
    }
    else{
        printf("Trinagle cannot formed");
    }
}