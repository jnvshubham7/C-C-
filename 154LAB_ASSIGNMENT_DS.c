#include<stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int  v, t;
    while(scanf("%d %d",&v,&t)==2)
    {
             if(v && t)
                   printf("%d\n",(2*v*t));
             else
                  printf("%d\n",0);
    }
    return 0;
}