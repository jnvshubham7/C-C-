#include <stdio.h>
#include <stdlib.h>

int main()
{
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);



    for(int i=4;i<7;i++){
        for(int j=1;j<i+1;j++){
            for(int k=0;k<j;k++){
                if(k%2==0)  printf("*");
                else    printf("@");
            }
            printf("\n");
        }
    }
}