//Sum of ASCII values 

#include<stdio.h>
#include<stdlib.h>

int main(){
    char a,b,c;
    int sum;
    printf("Enter any three character : ");
    scanf("%c%c%c", &a,&b,&c);
    //sum = int(a)+int(b)+int(c);
    printf("The Sum of ASCII Value :%d\n", a+b+c);
    return 0;
}