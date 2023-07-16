#include <stdio.h>
#include <string.h>

int main() {
    char X[21], Y[21];
    scanf("%s %s", X, Y);
    int res = strcmp(X, Y);
    if (res <= 0) {
        printf("%s\n", X);
    } else {
        printf("%s\n", Y);
    }
    return 0;
}
