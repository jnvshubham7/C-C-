#include <stdio.h>
int main() {    
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}