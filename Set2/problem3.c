//Even or Odd

#include<stdio.h>
void even_odd(int n);
int main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    even_odd(num);

    return 0;
}
void even_odd(int num)
{
    if(num%2 == 0){
        printf("%d is a even number", num);
    }
    else{
        printf("%d is an Odd number", num);
    }
}
