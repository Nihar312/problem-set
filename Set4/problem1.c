//Prime numbers in a given Range

#include <stdio.h>
int checkPrime(int num);

int main()
{
    int a, b;
    printf("Enter the Start point : ");
    scanf("%d", &a);
    printf("Enter the End point : ");
    scanf("%d", &b);
    
    for(int i=a; i <= b; i++){
        if(checkPrime(i))
            printf("%d ",i);
    }
    return 0;
}

int checkPrime(int num)
{
    if(num < 2){
        return 0;
    }
    else{
        int x = num;
        for(int i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}