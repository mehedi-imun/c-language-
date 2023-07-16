#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char ar[10001];
    scanf("%s",ar);
    int s = strlen(ar);
    int i=0,j=s-1;
    bool ans = true;
    while (i<j)
    {
        if ( ar[i] != ar[j])
        {
            ans = false;
           break;
        }
    i++;
    j--;
    }
    if (ans){
        printf("YES");
    }
   else {
        printf("NO");
    }
    

    return 0;
}