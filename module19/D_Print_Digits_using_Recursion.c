#include <stdio.h>
void fun(int n)
{
    if (n == 0)
        return;
    int s = n % 10;
    fun(n/10);
    printf("%d ", s);
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d",&n);
        fun(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }
    
    return 0;
}