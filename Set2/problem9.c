//Day of the Week

#include<stdio.h>
int day(int n);

int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    if(day(n) == 1){
        printf("Sunday");
    }
    else if(day(n) == 2){
        printf("Monday");
    }
    else if(day(n) == 3){
        printf("Tuesday");
    }
    else if(day(n) == 4){
        printf("Wednesday");
    }
    else if(day(n) == 5){
        printf("Thrusday");
    }
    else if(day(n) == 6){
        printf("Friday");
    }
    else if(day(n) == 7){
        printf("Saturday");
    }
    else{
        printf("Enter Valid Number (1-7)");
    }
    return 0;
}

int day(int d){

    if(d == 1){
        return 1;
    }
    else if(d == 2){
        return 2;
    }
    else if(d == 3){
        return 3;
    }
    else if(d == 4){
        return 4;
    }
    else if(d == 5){
        return 5;
    }
    else if(d == 6){
        return 6;
    }
    else if(d == 7){
        return 7;
    }
    else{
        return 0;
    }
}
