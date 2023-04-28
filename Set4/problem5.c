//Pattern 1

#include<stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter the Number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            k = j*i;
            printf("%d\t", k);
        }
        printf("\n");
    }
}