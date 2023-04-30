//Difference between even & odd INDEXED elements in a Array

#include<stdio.h>
#include<stdlib.h>

void oddEvenDiff(int arr[], int n);

void oddEvenDiff(int arr[], int n) {
    int i,odd,even;
    odd = 0;
    even = 0;
    
   for (int i = 1; i< n+1; i++) 
   {
      if (i % 2 == 0) {
         even = even + arr[i]; 
      } 
      else {
         odd = odd + arr[i];
      }
   }
   printf("The diffence is even : %d and odd : %d is %d\n", even,odd,abs(even-odd));
}

int main() {
   int arr[500];
   int n,i;
   int odd, even;
   printf("Enter the Size of the array : \n");
   scanf("%d", &n);
   printf("Enter the Numbers in array : \n");
   for(i=1; i<n+1; i++)
   {
        scanf("%d", &arr[i]);
   }

   oddEvenDiff(arr, n);
   return 0;
}