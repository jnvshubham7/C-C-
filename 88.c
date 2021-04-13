#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int number;

     printf("enter a number ");
     scanf("%d", &number);
     if (number >= 0)
     {

     printf("positive number or zero \n");
     printf("body of if is executed");
     }


    
    else {

     printf("negative number\n ");
     printf("body of else is executed");
    }
    return 0;
}