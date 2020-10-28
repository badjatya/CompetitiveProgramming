#include <stdio.h> //febonacci series
int main() 
{ 
    int n = 5;  
    for (int i = 0; i < n; i++) { 
        printf("%d ", fib(i)); 
    } 
    return 0; 
} 
int rec(int n) 
{ 
    if (n == 0) 
        return 0;  
    if (n == 1 || n == 2) 
        return 1; 
    else
        return (rec(n - 1) + rec(n - 2)); 
} 