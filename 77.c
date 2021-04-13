#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int a = 5, b = 2;
    double result;
    result = (double) a / b;
    printf("result = %lf", result);
    return 0;
}