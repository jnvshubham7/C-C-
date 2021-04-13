#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double num1;
    float num2;
    printf("enter the decimal number: ");
    scanf("%lf", &num1);
    printf("enter another decimal number: ");
    scanf("%f", &num2);
    printf("num1 = %lf\n", num1);
    printf("num2 = %f", num2);
    return 0;
}