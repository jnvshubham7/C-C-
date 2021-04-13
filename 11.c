#include<stdio.h> 
#include<math.h> 
int fib(int n,m) { 
   freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n,m) / sqrt(5)); 
} 
int main () 
{ 
  int n = 3; 
  int m = 5
  printf("%d", fib(n,m)); 
  return 0; 
}