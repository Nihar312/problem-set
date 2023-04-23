//Income Tax Calculation

#include<stdio.h>
float da = 0.15;
float hra = 0.18;

int main(){

    return 0;
}

float incomeTax(float bs, float da, float hra, float s){
    float gs, net;
    gs = bs + 0.15*da + 0.18*hra;
    if(bs < 250000)
    {
        net = gs-s;
        return net;
    }
    else if(bs > 250000 && bs <= 500000)
    {
        net = gs-s;
        return net;
    }
    else if(bs > 500000 && bs <= 1000000)
    {
        net = gs-s;
        return net;
    }
    else{
        net = gs-s;
        return net;
    }

}