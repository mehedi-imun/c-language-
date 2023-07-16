#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int v[n];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            sum1 = sum1 + v[i];
        }
        else
        {
            sum2 = sum2 + v[i];
        }
    }
    printf("%d %d", sum1, sum2);
    return 0;
}