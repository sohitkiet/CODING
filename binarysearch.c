#include <stdio.h>
int binarysearch(int[], int, int, int);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int item,j;
    printf("enter the value of item:\n");
    scanf("%d", &item);
    j = binarysearch(arr, item, 0, 8);
    if(j==-1)
    printf("item not found !!");
    else
    printf("value of index is : %d", j);
    return 0;
}
int binarysearch(int arr[], int item, int b, int e)
{
    int mid;
    while (b <= e)
    { mid = (b + e) / 2;

        if (arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            b = mid + 1;

        else if (arr[mid] > item)
            e = mid;
    }
    return -1;
}