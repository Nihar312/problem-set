//Sum of Digits in Given Number

#include<stdio.h>
int sum(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("The Sum of the Digits of '%d' number is : %d\n", n,sum(n));
    return 0;
}

int sum(int n)
{
    int r,sum = 0;
    while(n > 0)
    {
        r = n%10;
        sum = sum+r;
        n = n/10;
    }
    return sum;
}