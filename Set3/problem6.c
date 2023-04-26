//Factorial

#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("The Factorial of the %d is : %d", n, fact(n));

    return 0;
}

int fact(int n){
    int factN, factNm1;
    if(n == 1)
    {
        return 1;
    }
    else{
        factNm1 = fact(n-1);
        factN = factNm1*n;
    }
    return factN;
}
