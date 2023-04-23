// vowel OR consonant

#include<stdio.h> 
void vow_con(char c);

int main(){
    char c;
    printf("Enter the character : ");
    scanf("%c", &c);

    vow_con(c);
    return 0;
}

void vow_con(char c)
{
    if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U')
    {
        printf("VOWEL\n");
    }
    else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("CONSONANT\n");
    }
    else
    {
        printf("SPECIAL CHARACTER\n");
    }    
}