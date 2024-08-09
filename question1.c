/* Q1. While purchasing certain item, a discount of  
10% is offered if the quantity purchased is more 
than 1000. If quantity and price per item are input 
through the keyboard, Write a program
to calculate the total expenses.*/
#include<stdio.h>
int main(){
  int quantity,discount=0;
  float rate,tot;
  printf("Enter quantity and rate : ");
  scanf("%d %f",&quantity,&rate);
  if(quantity>1000)
  discount=10;
  tot=(quantity*rate)-(quantity*rate*discount/100);
  printf("Total expense = Rs. %f\n",tot);
    return 0;
}