#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    fgets(a, 100001, stdin);
    int s = strlen(a);
    for (int i = 0; i < s; i++)
    {
        if (a[i] == ',')
        {
            a[i] = ' ';
        }
    }
    for (int i = 0; i < s; i++)
    {

        if (a[i] >= 'a' && a[i] <= 'z')
        {
            printf("%c", a[i]-32);
        }
        else if  (a[i] >= 'A' && a[i] <= 'Z')
       {
            printf("%c", a[i]+32);
        }
        else{
            printf("%c",a[i]);
        }
        
    }

    return 0;
}
