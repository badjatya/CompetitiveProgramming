#include <stdio.h> //factorial
 
int main() 
{ 
    int a = 5; 
    printf("factorial of %d is", a,fac(a)); 
    return 0; 
} 
  
int fac(int a) 
{ 
    if (a == 0 || a == 1) 
        return 1; 
    else
        return a * fac(a - 1); 
} 
 
