// Convert String as Integer

#include<stdio.h>
int strToInt(char str[]);

int main(){
    int value;
    char str[20];
    printf("Enter any string that is Integer : ");
    scanf("%s", str);

    value = strToInt(str);
    printf("Equivalent integer Value : %d\n", value);
    return 0;
}

int strToInt(char str[]){
    int i=0, sum = 0;
    while(str[i] != 0)
    {
        if(str[i]<48 || str[i]>57)
        {
            printf("Unable to convert it into integer");
        }
        else{
            sum = sum*10 + (str[i]-48);
            i++;
        }
    }
    return sum;
}