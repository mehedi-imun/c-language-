#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char a[101];
        scanf("%s", a);
        int len = strlen(a);
        if (len <= 10)
        {
            printf("%s\n", a);
        }
        else
        {
            printf("%c%d%c\n", a[0],len-2,a[len-1] );
        }
    }

    return 0;
}