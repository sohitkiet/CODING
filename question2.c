#include<stdio.h>
int main(){
    int A1,A2,A3,price,discount;
    printf("Enter the price of A1 :");
    scanf("%d",&A1);
    printf("Enter the price of A2 :");
    scanf("%d",&A2);
    printf("Enter the price of A3 :");
    scanf("%d",&A3);
    if(A1+A2+A3 > 1000)
    {
      printf("Total paying amount :%d",A1+A2+A3-(A1+A2+A3)*10/100);
    }
    else {
    printf("Total paying amount :%d",(A1+A2+A3));
    }
    return 0;
}
