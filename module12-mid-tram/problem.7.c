#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c - %d\n", i, count[i - 'a']);
    }
    return 0;
}