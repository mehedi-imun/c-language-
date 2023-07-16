#include <stdio.h>
#include <math.h>
int main()
{
     int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);

    float t = (float)m1 * d / (float)m2;

    printf("%d", (int)t);
    return 0;

}