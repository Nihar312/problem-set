//Roots of a Quadratic Equation

#include<stdio.h>
#include<math.h>

//float roots(float a, float b, float c);
float expr(float a, float b, float c);

int main(){
    int a,b,c,x1,x2;
    printf("Enter 'a' : ");
    scanf("%d", &a);
    printf("Enter 'b' : ");
    scanf("%d", &b);
    printf("Enter 'c' : ");
    scanf("%d", &c);

    if(expr(a,b,c) == 1)
    {
        printf("Imaginary Roots\n");
    }
    else{
        x1 = (-b + expr(a,b,c))/2*a;
        x2 = (-b - expr(a,b,c))/2*a;
        printf("The roots are :\n");
        printf("x1 = %d , x2 = %d\n", x1,x2);
    }

    return 0;
}

float expr(float a, float b, float c){
    int d;
    d = (b*b - 4*a*c) ;
    if(d < 0)
    {
        return 1; 
    }
    else{
        return sqrt(d);
    }
}