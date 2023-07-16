#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str [n];
    for (int  i = 0; i <= n; i++)
    {
        scanf("%c",&str[i]);
    }
    int sum = 0;
    for (int  i = 1; i <= n; i++)
    {
        sum=sum+(str[i]-'0');
    }
    printf("%d",sum);
    return 0;
}