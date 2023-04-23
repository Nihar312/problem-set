//Reverse a 3-digit Number

#include<stdio.h>
int reverse(int n);
int main(){
    int num;
    printf("Enter a 3 digit Number : ");
    scanf("%d", &num);
    printf("The Reverse of %d is %d\n", num, reverse(num));

    return 0;
}

int reverse(int n){
    int r,s=0;
    while(n>0){
        r = n%10;
        s = (s*10) + r;
        n = n/10;
    }
    return s;
}