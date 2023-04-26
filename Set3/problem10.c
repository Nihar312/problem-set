//Fibonnacci

#include<stdio.h>
int fib(int n);

int main(){
    int n,i;
    printf("enter n : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("%d\t", fib(i));
    }
    
    return 0;
}

int fib(int n){
    int fibn;

    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else{
        fibn = fib(n-2)+fib(n-1);
        return fibn;
    }
}