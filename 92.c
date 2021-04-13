#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    for (int i = 1; i <= 100; ++i)
    {
    printf("%d ", i);
    }
    return 0;
}