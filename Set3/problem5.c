//LCM of Two Numbers

#include <stdio.h>
int lcm(int a, int b);

int main() {
    int n1, n2;
    printf("Enter the value of 1st Number : ");
    scanf("%d", &n1);
    printf("Enter the value of 2nd Number : ");
    scanf("%d", &n2);
    
    printf("The LCM of %d and %d is %d.", n1, n2, lcm(n1,n2));
    return 0;
}

int lcm(int a, int b){
    int max;
    max = (a > b) ? a : b;
    while (1) {
        if ((max % a == 0) && (max % b == 0)) {
            break;
        }
        ++max;
    }
    return max;
}