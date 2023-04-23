//Reverse The Number

#include<stdio.h>
int rev(int n);
void pal(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("The Reversed Number is %d\n", rev(n));
    pal(n);
    return 0;
}

int rev(int n){
    int r, r_sum = 0;
    while(n > 0)
    {
        r = n%10;
        r_sum = (r_sum*10)+r;
        n = n/10;       
    }
    return r_sum;
}

void pal(int n){
    if(n == rev(n))
    {
        printf("IT IS A PALINDROME NUMBER\n");
    }
    else{
        printf("IT IS NOT A PALINDROME NUMBER\n");
    }
}

void add(){
    print("Hi");
}