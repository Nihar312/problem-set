//prime or composite

#include<stdio.h>
int prime_com(int n);

int main(){
    int n;
    printf("Enter the Positive Number : ");
    scanf("%d", &n);
    if(prime_com(n) == 2)
    {
        printf("IT IS A PRIME NUMBER\n");
    }
    else if(prime_com(n) > 2)
    {
        printf("IT IS A COMPOSITE NUMBER\n");
    }
    else if(n ==1){
        printf("IT IS A SPECIAL NUMBER\n");
    }
    else{
        printf("Invalid Number\n");
    }
    return 0;
}

int prime_com(int n)
{
    int i,ctr=0;
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            ctr = ctr + 1;
        }
        else{
            continue;
        }
    }
    return ctr;
}