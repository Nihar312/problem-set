//Difference between even & odd elements in a Array

#include<stdio.h>
#include<stdlib.h>

void oddEvenDiff(int arr[], int n);

void oddEvenDiff(int arr[], int n) {
    int i,odd,even;
    odd = 0;
    even = 0;
    
   for (int i = 0; i< n; i++) 
   {
      if (arr[i] % 2 == 0) {
         even = abs(even + arr[i]); 
      } 
      else {
         odd = abs(odd + arr[i]);
      }
   }
   printf("The diffence is even : %d and odd : %d is %d\n", even,odd,abs(even-odd));
}

int main() {
   int arr[50];
   int n,i;
   int odd, even;
   printf("Enter the Size of the array : \n");
   scanf("%d", &n);
   printf("Enter the Numbers in array : \n");
   for(i=0; i<n; i++)
   {
        scanf("%d", &arr[i]);
   }

   oddEvenDiff(arr, n);

   return 0;
}