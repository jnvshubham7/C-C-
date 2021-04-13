#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int age = 23, result;

    printf("%d\n", !( age >= 22));
    printf("%d\n", !( age >= 30));
    return 0;
}