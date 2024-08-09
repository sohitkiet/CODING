#include<stdio.h>
int linearsearch(int [],int);
int main(){
int i,item,j;
int arr[10];
printf("enter the element of array");
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
printf("print the value of item:\n");
scanf("%d",&item);
j=linearsearch(arr,item);
if(j>=0)
printf(" value is found on i :%d index",j);
else
printf("number is not found");
return 0;
}
int linearsearch(int arr[],int item){
    int i;
    for(i=0;i<10;i++){
       if(arr[i]==item){
        return i;
       }
    }
}




