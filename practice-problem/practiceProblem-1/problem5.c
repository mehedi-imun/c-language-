#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num >= 10000)
    {
        printf("Gucci Bag\n");
        if (num >= 20000)
        {
            printf("Gucci Belt");
        }
    }
    else if (num >= 5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("buy something");
    }

    return 0;
}