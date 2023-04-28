//Pattern 5

#include<stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter the Number :");
    scanf("%d", &n);
    k=0;
    for(i=n; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}