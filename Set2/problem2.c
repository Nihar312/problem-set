// Biggest of three numbers

#include<stdio.h>

void big_three(int a, int b, int c);

int main(){
    int a,b,c;
    printf("Enter the 1st Number: ");
    scanf("%d", &a);
    printf("Enter the 2nd Number: ");
    scanf("%d", &b);
    printf("Enter the 3rd Number: ");
    scanf("%d", &c);

    big_three(a,b,c);
    return 0;
}

void big_three(int a, int b, int c){
    if(b>a && b>c)
    {
        printf("%d is the biggest Number\n", b);
        if(a>c)
        {
            printf("%d > %d > %d\n", b,a,c);
        }
        else{
            printf("%d > %d > %d\n", b,c,a);
        }
    }
    else if(a>c && a>b)
    {
        printf("%d is the biggest Number\n", a);
        if(c>b)
        {
            printf("%d > %d > %d\n", a,c,b);   
        }
        else{
            printf("%d > %d > %d\n", a,b,c);
        }
    }
    else{
        printf("%d is the biggest Number\n", c);
        if(a > b)
        {
            printf("%d > %d > %d\n", c,a,b); 
        }
        else{
            printf("%d > %d > %d\n", c,b,a);
        }
    }

}