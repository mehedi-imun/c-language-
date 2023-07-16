#include <stdio.h>
# include <string.h>
# include <limits.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    int a [n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min= INT_MAX;
    int max= INT_MIN;
    int minIndex,maxIndex;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min){
            min = a[i];
            minIndex=i;
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max){
            max = a[i];
            maxIndex=i;
        }
       
    }
    int temp = min;
    for (int i = 0; i < n; i++)
    {
        if(i==minIndex){
            a[i]=max;
        }
        if ( i == maxIndex)
        {
           a[i]=temp;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}