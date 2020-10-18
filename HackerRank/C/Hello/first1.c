//WAP to copy all elements of an array to another array
#include<stdio.h>
int main()
{
    int arr[11],arr1[11],i,j;
    for(i=0;i<=10;i++)
    {
        arr[i]=i;
    }
    printf("Here is the elements of array 1: ");
    for(i=0;i<=10;i++)
    {
        printf("\n %d",arr[i]);
    }
    
    for(i=0;i<=10;i++)
    {
        arr1[i]=arr[i];
    }
    printf("Here is the elements of array 2: ");
    for(i=0;i<=10;i++)
    {
        printf("\n %d",arr1[i]);
    }
  return 0;
}
