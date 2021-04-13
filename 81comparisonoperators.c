#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int a,b;
    scanf("%d %d", &a, &b);

    printf("%d\n", b > -1);
    printf("%d\n", b > 5);

    printf("%d\n", a >= 5);
    printf("%d\n", a >= b);

    printf("%d\n", a < b);
    printf("%d\n", a < 5);
    
    printf("%d\n", a <= 5);
    printf("%d\n", a <= 1);

    printf("%d\n", a == 5);
    printf("%d\n", a == b);

    printf("%d\n", b != 5);
    printf("%d\n", b != 7);

    return 0;


   
}