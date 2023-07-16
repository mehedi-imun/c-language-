#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s",s);
    int strLength = strlen(s);
    int count = 0;
    for (int i = 0; i < strLength; i++)
    {
        count = count + (s[i]-'0');
       
    }
     printf("%d",count);
    
    return 0;
}