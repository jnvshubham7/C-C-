#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int number;
   // printf("enter a number ");
    scanf("%d", &number);
    if (number > 0)
    {
    printf("positive number");
    }
    else if (number == 0)
    {
    printf("zero ");
    }
    else
    {
        printf("negative number");

    }
 
    return 0;
}