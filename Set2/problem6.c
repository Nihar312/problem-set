//Amstrong Number

#include<stdio.h>
int amstrong(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n == amstrong(n))
    {
        printf("%d is a Amstrong Number", n);
    }
    else{
        printf("%d is not a Amstrong number", n);
    }
    return 0;
}

int amstrong(int n){
    int r,s=0;
    while(n > 0)
    {
        r = n%10;
        s = s + (r*r*r);
        n = n/10;
    }
    return s;
}

