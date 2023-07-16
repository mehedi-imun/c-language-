#include <stdio.h>
int fun(int *x){
    printf("%d\n",*x);
    *x=2100;
    
}
int main()
{
    int x = 100;
    fun(&x);
    printf("%d",x);
    return 0;
}