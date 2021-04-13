#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double number;
    //printf("enter a number: ");
    scanf("%lf", &number);
    while (number >= 0.0)
    {
        printf("you entered %.2lf\n", number);
        printf("enter a number: ");
scanf("%lf", &number);
    }
    
    return 0;
}