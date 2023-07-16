#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a =='z'){
        a = 'a';
    }
    else{
        a = a+1;
    }
      printf("%c",a);
    return 0;
}