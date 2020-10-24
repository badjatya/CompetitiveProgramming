// Write a program in C language using recursion to calculate sum of elements.

#include<stdio.h>

int add(int arr[], int a)
{
    int sum;
    if(a>=0)
    {
        sum = arr[a] + add(arr,a-1);
        return sum;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,i, arr[10],sum =0;
    printf("Enter no. of elements: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("\n Enter element %d: ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("\nSum : %d",add(arr,a-1));

}
