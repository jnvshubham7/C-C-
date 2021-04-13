#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double n1 = 2.9, sum;
    sum = n1 + 3;

    printf("sum = %lf", sum);
    return 0;
}