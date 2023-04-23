//swap of two numbers

#include<stdio.h>
void swap(int a, int b);
int main(){
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    printf("Enter the 2nd number : ");
    scanf("%d", &b);

    printf("The Swap numbers are - \n");
    swap(a,b);

    return 0;
}
void swap(int a,int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("1st num = %d and 2nd num = %d\n", a,b);
}