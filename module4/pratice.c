#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {

            printf("I Love Practice");
        }
    }
    else
    {
        printf("provide positive number");
    }

    return 0;
}