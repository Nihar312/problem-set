//Toggle Case

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i, n;
    printf("Enter the Size : ");
    scanf("%d", &n);

    printf("Enter  the string : ");
    for(i=0; i<=n; i++)
    {
        scanf("%c", &s[i]);
    }
     
    for(i=0;i<s[i];i++)  
    {
        if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
        else if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	}
    printf("string in togglecase:\n");
 	for(i=0; i<=n; i++)
    {
        printf("%c ",s[i]);
    }   
    return 0;
}