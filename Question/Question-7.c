#include<stdio.h>
int main(){
    int num,x;
    printf("Enter the number (-1000 to +1000): ");
    scanf("%d",&num);
   if(num<0 & num >= -1000){
    printf("Negative \n");
    printf("no data\n");
   }
    if(num > -1000 && num <= 100){
        printf("2 digit number\n");
        printf("very bad number\n");
    }
   else if(num >= 0 && num <= 1000){
    printf("Positive \n");
    printf("data hai\n");} {
    if(num>=100 && num < 1000) {
    printf("3 digit\n");
    printf("very nice number\n");
     }
   else{
       printf("Wrong\n");
       printf("Type again\n");
    }
     printf("Thank you!");
   
   return 0;
}