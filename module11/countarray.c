#include <stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    int count[7]={0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
       
    }
    printf("a- %d",count[0]);
    
    return 0;
}