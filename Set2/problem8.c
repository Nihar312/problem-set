//Quadrant of a Point

#include<stdio.h>
void point(float x, float y);

int main(){
    float x,y;
    printf("Enter X point : ");
    scanf("%f", &x);
    printf("Enter Y point : ");
    scanf("%f", &y);

    point(x,y);
    return 0;
}

void point(float x, float y){
    if(x > 0 && y > 0){
        printf("Quardant 1 - Q1");
    }
    else if(x < 0 && y > 0){
        printf("Quadrant 2 - Q2");
    }
    else if(x < 0 && y < 0){
        printf("Quadrant 3 - Q3");
    }
    else{
        printf("Quadrant 4 - Q4");
    }
}
