#include<stdio.h>
int linearsearch(int [],int);
int main(){
   int arr[]={1,5,6,7,8,9,2,3,4};
   int item,i,j;
   printf("searched number:\n");
   scanf("%d",&item);
   j=linearsearch(arr,item);
   printf("value of index is: %d",j);
   return 0;
   }
   int linearsearch(int arr[],int item){
    int i;
    for(i=0;i<9;i++){
        if(arr[i]==item){
            return i;
        }
    }
   }