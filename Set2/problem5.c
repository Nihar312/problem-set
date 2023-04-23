//Leap Year or not

#include<stdio.h>
void year(int yr);
int main(){
    int y;
    printf("Enter the Year : ");
    scanf("%d", &y);
    year(y);

    return 0;
}
void year(int yr)
{
    if((yr%4 == 0 && yr%100 != 0) || yr%400 == 0)
    {
        printf("Leap year");
    }
    else{
        printf("Non-Leap Year");
    }       
}