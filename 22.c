#include <stdio.h>
int main()
{
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);
    {
        sum = a+b;
        printf("%d", sum); 
    }

    
    return 0;
}