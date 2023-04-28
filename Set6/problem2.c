//Data Validation

#include<stdio.h>

int email(char str[]);

int main(){
    char mail[30];
    //int i,p1,p2,p3,p4,p5;

    printf("Enter the email : ");
    scanf("%s", &mail);

    if(email(mail) == 1){
        printf("Valid Email");
    }
    else{
        printf("Invalid Email");
    }      

}
int email(char mail[]){
    int i,p1,p2,p3,p4;
    for(i=0; mail[i] != '\0'; i++)
    {
        if(mail[i] == '@')
        {
            p1 = i;
        }
        if(mail[i] == '.')
        {
            p2 = i;
        }
        if(mail[i] >= 'A' && mail[i] <= 'Z')
        {
            p3 = i;
        }
        if(mail[i] >= '0' && mail[i] <= '9')
        {
            p4 = i;
        }
        /**if(mail[i] >= 'a' && mail[i] <= 'z')
        {
            p5 = i;
        }
        if{
            p5 = i;
        }**/
    }

    if(mail[p3] >= 'A' && mail[p3] <= 'Z')
    {
        return 3;
    }
    else if(mail[p4] >= '0' && mail[p4] <= '9')
    {
        return 2;
    }
    else if(p1 > 2 && (p2-p1) > 3){
        return 1;
    }
    else{
        return 0;
    }
}
