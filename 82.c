#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int intType;
    long int longType;
    float floatType;
    double doubleType;
    char charType;
    printf("int : %zu \n", sizeof ( intType ));
    printf("float : %zu \n", sizeof ( floatType ));
    printf("double : %zu \n", sizeof ( doubleType ));
    printf("char : %zu ", sizeof ( charType ));
    
    return 0;
}