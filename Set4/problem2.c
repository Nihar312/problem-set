//Digital root of a given number

#include<stdio.h>
int root(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("The single digit root is %d\n", root(n));

    return 0;
}

int root(int n){
    int r, t, sum=0;
    t = n;
    while(t > 0)
    {
        r = t%10;
        sum = sum+r;
        t = t/10;
        if(t == 0 && sum < 10){
            return sum;
        }
        else{
            root(sum);
        }
    }
}