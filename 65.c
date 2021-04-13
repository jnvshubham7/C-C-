#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int id;
    printf("enter an interger : ");
    scanf("%d", &id);
    printf("id = %d", id);
    return 0;
}