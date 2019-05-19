#include<stdio.h> 
  
/*Returns the square root of n. Note that the function */
float squareRoot(float n) 
{ 
  /*We are using n itself as initial approximation 
   This can definitely be improved */
  float x = n; 
  float y = 1; 
  float e = 0.000001; /* e decides the accuracy level*/
  while(x - y > e) 
  { 
    x = (x + y)/2; 
    y = n/x; 
  } 
  return x; 
} 
  
/* Driver program to test above function*/
int main() 
{ 
  int n;
  scanf("%d", &n); 
  printf ("%f", squareRoot(n)); 
  getchar(); 
} 
