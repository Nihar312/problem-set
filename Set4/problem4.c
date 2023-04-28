#include<stdio.h>
int sum_Tri(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    
    printf("The Sum of %d Triangular Number is %d",n,sum_Tri(n));
    return 0;
}

int sum_Tri(int n){
   int sum = 0;
   for (int i=1; i<=n; i++)
   {
        sum = sum + (i*(i+1)/2);
   }
   return sum;
}