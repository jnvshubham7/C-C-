#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double number1 = 1.5555555;
    float number2 = 4.0;
     printf("number1 = %.2lf\n", number1);
    printf("number2 = %.2f", number2);
    return 0;
}