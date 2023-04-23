//Energy Bill Calculation

#include<stdio.h>
int bill(int n);

int main(){
    int nunits;
    printf("Enter the Units : ");
    scanf("%d", &nunits);

    printf("The bill is : %d\n", bill(nunits));

    return 0;
}

int bill(int n)
{
    if(n <= 100)
    {
        return 100+(n*3);
    }
    else if(n > 100 && n <= 200)
    {
        return 100+(100*3)+(n-100)*5;
    }
    else if(n > 200 && n < 400)
    {
        return 900+(n-200)*7;
    }
    else{
        return 900+1400+(n-400)*10;
    }
}