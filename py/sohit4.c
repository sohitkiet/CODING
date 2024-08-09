#include<stdio.h>
int main()
{
    int a[50],i,j,max,min,n;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    printf("enter element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    /* Assume first array element as maximum and minimum */
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]>max)
         {
            max=a[i];
         }
         if(a[i]<min)
         {
            min=a[i];
         }
    }
    printf("largest number: %d",max);
    printf("\nsmallest number: %d",min);
    return 0;
}