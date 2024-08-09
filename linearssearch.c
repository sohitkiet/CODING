#include<stdio.h>
int linearsearch(int[],int);
int main(){
    int arr[]={2,7,5,9,20,10};
    int item,i;
    printf("enter the value you wantfdd search");
    scanf("%d",&item);
    i=linearsearch(arr,item);
    printf("value of i: %d",i);
    return 0;
}
int linearsearch(int arr[],int item){
    int i;
    for(i=0;i<6;i++){
        if(arr[i]==item){
            return i;
        }
        
    }
    
}
