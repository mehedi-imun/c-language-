#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s",a);
    scanf("%s",b);
    int c = strlen(a);
    int d = strlen(b);
    printf("%d %d\n%s%s\n", c,d,a,b);
    char tem= a[0];
    a[0]=b[0];
    b[0]=tem;
    printf("%s %s",a, b);

    return 0;
}