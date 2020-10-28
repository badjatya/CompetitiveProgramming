#include <stdio.h>//digit count  
int main() 
{ 
    int v,n;
    printf("Enter the number : " );
    scanf("%d",&n);
    v= f(n);
    printf("%d",v);
    return 0; 
} 
  
int f(int i) 
{
    static int g=0;
 
    if(i>0)
    {
        g++;
        f(i/10);
    }
    else
    {
        return g;
    }
} 