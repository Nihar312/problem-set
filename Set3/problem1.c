//Sum of Number Range

#include<stdio.h>
int range(int a, int b);

int main(){
    int a,b;
    printf("Enter the Start Point : ");
    scanf("%d", &a);
    printf("Enter the End Point : ");
    scanf("%d", &b);

    printf("The Sum from %d to %d is : %d\n", a,b,range(a,b));
    return 0;
}

int range(int a, int b){
    int i,sum;
    for(i = a; i <= b; i++)
    {
        sum = sum+i;
    }
    return sum;
}