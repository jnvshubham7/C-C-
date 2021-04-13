#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int i;
    double number , sum = 0.0;

    for(i = 1; i <= 10; ++i)
    {
   // printf("enter a n%d: ", i);
    scanf("%lf", &number);
    if(number < 0.0)
{
    continue;

}
sum += number;
    }
printf("sum = %.2lf", sum);

    return 0;
}