#include <stdio.h>
int main() {
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", product);
    
    return 0;
}