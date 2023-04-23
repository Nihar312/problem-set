//Temperature Conversions

#include<stdio.h>
float temp(float t);

int main(){
    float c;
    printf("Enter the temperature in Celcius :");
    scanf("%f", &c);
    printf("The Temp in Farhenite : %f F", temp(c));

    return 0;
}

float temp(float tc){
    float tf;
    tf = (tc * 9/5) + 32;
    return tf;
}