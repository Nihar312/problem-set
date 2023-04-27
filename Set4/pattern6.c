//Pattern 6

#include<stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter the Number :");
    scanf("%d", &n);
    k=0;
    for(i=k+1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}