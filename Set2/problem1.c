//Biggest of wo numbers

#include<stdio.h>

int big(int a, int b);

int main(){
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    printf("Enter the 2nd number : ");
    scanf("%d", &b);

    if(big(a,b) == 1){
        printf("%d is bigger than %d\n", a,b);
    }
    else{
        printf("%d is bigger than %d\n", b,a);
    }
    return 0;
}

int big(int a, int b){
    if(a > b){
        return 1;
    }
    else{
        return 0;
    }
}