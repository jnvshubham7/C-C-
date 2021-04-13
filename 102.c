#include <stdio.h>
int addNumbers(int a , int b);

int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int n1, n2, sum;

    //printf("enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2);
    printf("Sum = %d", sum);
    return 0;
}
int addNumbers(int a, int b)

    {
        
        int result;

        result = a + b;
        return result;

    }



    

