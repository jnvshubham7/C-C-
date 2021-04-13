#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double salary = 2.7;
    int age = 29;
    printf("age = %d\nsalary = %lf", age , salary);
    return 0;
}