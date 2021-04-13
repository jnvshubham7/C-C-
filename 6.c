#include <stdio.h>
int main() {   
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout); 

    int number1, number2, sum;
    
    printf("5,6: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}