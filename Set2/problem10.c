//choice based Arthimetic

#include<stdio.h>
#include<math.h>
void operator(float a, float b, int ch);

int main(){
    float a,b;
    int ch;
    printf("Enter the 1st operand : ");
    scanf("%f", &a);
    printf("Enter the 2nd operand : ");
    scanf("%f", &b);

    printf("Enter 1 for Addition\nEnter 2 for Substration\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter 5 for Reminder\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);

    operator(a,b,ch);

    return 0;
}
void operator(float a, float b, int ch){
    //float a,b;
    switch(ch)
    {
        case 1:
            printf("The result : %f\n", a+b);
            break;
        case 2:
            printf("The result : %f\n", a-b);
            break;
        case 3:
            printf("The result : %f\n", a*b);
            break;
        case 4:
            printf("The result : %f\n", a/b);
            break;
        case 5:
            printf("The result : %f\n", fmod(a,b));
            break;
        default:
            //printf("Choice Invalid\n");
            break;    
    }
}