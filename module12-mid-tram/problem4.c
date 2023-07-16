#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s",s);
    int count1=0,count2=0;
    for (int i = 0; i < strlen(s); i++)
    {
      
        if (s[i]>= 'A' && s[i] <= 'Z')
        {
              count1++;
        }
        if (s[i]>= 'a' && s[i] <= 'z')
        {
              count2++;
        }
        
    }
    printf("%d %d ",count1,count2);
    return 0;
}