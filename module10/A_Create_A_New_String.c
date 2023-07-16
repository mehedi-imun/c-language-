#include <stdio.h>
#include<string.h>

int main()
{
    char i[1001];
    char t[1001];
    scanf("%s %s",i,t);
    long long int count1=0,count2=0;
    count1= strlen(i);
    count2= strlen(t);
    printf("%lld %lld\n",count1,count2);
    printf("%s %s",i,t);
    return 0;
}