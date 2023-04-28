//Leap Year in a given Range

#include <stdio.h>
void leap(int yr, int min_yr, int max_yr);

int main(){
    int year;
    int min_yr,max_yr;

    printf("Enter the lowest year: ");
    scanf("%d",&min_yr);

    printf("Enter the highest year: ");
    scanf("%d",&max_yr);

    printf("Leap years in given range are: \n");
    leap(year,min_yr,max_yr);
    
  return 0;
}

void leap(int yr, int min_yr, int max_yr)
{
    for(yr = min_yr; yr <= max_yr; yr++)
    {       
         if(((yr%4 == 0) && (yr%100 != 0))||(yr%400 == 0))
         {
            printf("%d\t",yr);
         }
             
    }
}