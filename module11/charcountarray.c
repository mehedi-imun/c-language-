#include <stdio.h>
# include <string.h>
int main()
{
    char c[100];
    scanf("%s",c);
    char count[26]={0};
    for (int  i = 0; i < strlen(c); i++)
    {
        int vale = c[i]-'a';
       count[vale]++;
    }
    for (int i = 0; i < 26; i++)
    {
      printf("%c-%d\n", i+'a', count[i]);
    }
    
    
    return 0;
}