//Sum of the Factors

#include<stdio.h>
int factor(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("The Sum of all the factors of the %d is %d\n", n,factor(n));
    if(n == factor(n))
    {
        printf("it is perfect Number\n");
    }
    else{
        printf("It is not a perfect Number\n");
    }
    return 0;
}

int factor(int n){
    int i,d,s=0;
    for(i=1; i <= n; i++)
    {
        if(n%i ==0)
        {
            d = n/i;
            s = s + d; 
        }
        else{
            continue;
        }
    }
    return (s-n);
}