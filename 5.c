#include <stdio.h>
int main() { 
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);   

    int a, b, sum = 0;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // calculating sum
    sum = a + b;      
    
    printf("%d + %d = %d", a, b, sum);
    return 0;
}