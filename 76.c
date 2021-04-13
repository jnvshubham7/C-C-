#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int sum, n1 = 4;
    double n2 = 3.4;
    sum = n1 + n2;

    printf("sum = %d", sum);
    return 0;
}