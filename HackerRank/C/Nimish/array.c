//WAP to copy all elements of an array to another array
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[11],arr1[11],i,j,arr2[11];
    for(i=0;i<=10;i++)
    {
        arr[i] = i;
        arr1[i] = i;
    }
    printf("Here is the elements of array 1: ");
    for(i=0;i<=10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nHere is the elements of array 2: ");
    for(i=0;i<=10;i++)
    {
        printf("%d",arr1[i]);
    }
    for(j=0;j<=10;j++)
    {
        arr2[j]=arr[i];
    }
    printf("\nHere is the elements of Merged array : ");
    for(j=0;j<=10;j++)
    {
        arr2[i+j]=arr1[j];
    }
    for(j=0;j<=21;j++)
    {
        printf(" %d",arr2[j]);
    }
    return 0;
}
