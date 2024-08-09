/*calculation of total expenses*/
#include<stdio.h>
int main()
{
    int qty;
    float rate,dis, tot;
    printf("Enter quantity and rate : ");
    scanf("%d%f",&qty,&rate);
    if(qty>1000)
    dis=10;
    else 
    dis=10;
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("Total expenses = Rs. %f\n",tot);
    return 0;
}