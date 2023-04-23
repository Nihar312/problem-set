//Simple Interest

#include<stdio.h>

float simpleInt(float p, float n, float r);

int main(){

    float p,n,r,s;
    printf("Enter Principal Amount : ");
    scanf("%f", &p);
    printf("Enter Time period in Yrs : ");
    scanf("%f", &n);
    printf("Enter rate of interest : ");
    scanf("%f", &r);

    printf("The Simple Interest is : %f\n", simpleInt(p,n,r));
    return 0;
}

float simpleInt(float p, float n, float r){
    float si;

    si = (p*n*r)/100;
    return si;
}