//nCr

#include<stdio.h>
int ncr(int n, int r);
int fact(int n);

int main(){
    int n, r;
    printf("Enter the value of 'N' : ");
    scanf("%d", &n);
    printf("Enter the value of 'R' : ");
    scanf("%d", &r);

    printf("the Result C(n,r) : %d\n", ncr(n,r));
    return 0;
}

int ncr(int n, int r){
    if(r == 1)
    {
        return n;
    }
    else if(r == n)
    {
        return 1;
    }
    else{
        return fact(n)/(fact(r)*fact(n-r));
    }
}

int fact(int n){
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}