#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int number;
    printf("enter the number : ");
    scanf("%d", &number);

    if (number < 0) {
    printf("%d  is negative.\n ", number);
    }
printf("this is always executed.");
    
    return 0;
}