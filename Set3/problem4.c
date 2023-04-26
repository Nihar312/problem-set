// C program to find GCD of two numbers
#include <math.h>
#include <stdio.h>
int gcd(int a, int b);
 

int gcd(int a, int b)
{
    int min = ((a < b) ? a : b);
    while (min > 0) {
        if (a % min == 0 && b % min == 0) {
            break;
        }
        min--;
    }
    return min; // return gcd of a and b
}
 

int main()
{
    int a, b;
    printf("Enter the Value of 'a' : ");
    scanf("%d", &a);
    printf("Enter the Value of 'b' : ");
    scanf("%d", &b);

    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}