#include<stdio.h>
int main(){
    int x,y;
    printf("Put the x value: ");
    scanf("%d",&x);
    printf("\nPut the y value: ");
    scanf("%d",&y);
    printf("\nlet's see: %d",x == y || x <= y && x != 9);
    return  0;
}