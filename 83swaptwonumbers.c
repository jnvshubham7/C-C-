#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int a = 57, b = 1, temp;
    temp = a;
    a = b;
    b = temp;

    printf(" a = %d b = %d", a , b );
    return 0;
}