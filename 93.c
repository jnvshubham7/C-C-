#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int sum = 0;
    for (int i = 1; i <= 100; ++i)
    { sum = sum + i; }
        printf("the sum is %d", sum); 
    
    
    return 0;
}