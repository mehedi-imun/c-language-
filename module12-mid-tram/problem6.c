#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int x;
    scanf("%d",&x);
    int find =0;
    for (int i = 0; i <n; i++)
    {
        if (x == ar[i])
        {
            find++;
        }
    }
    printf("%d",find);
    return 0;
}