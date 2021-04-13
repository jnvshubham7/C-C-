#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double number1, number2, product;
    printf("enter two numbers: ");
    scanf("%lf %lf", &number1, &number2);
    product = number1 * number2;
    printf("product = %lf", product);
    return 0;
}