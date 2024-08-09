#include<stdio.h>
int main(){
    float profit, loss, buy, sell;
    printf("Buying amount : ");
    scanf("%f",&buy);
    printf("selling amount :");
    scanf("%f",&sell);
    if(buy>sell){
        loss = 100 - sell/buy*100;
        printf("loss = %f",loss);
    }
    else
    {
        profit = 100 - buy/sell*100;
        printf("profit = %f",profit);
    }
    return 0;

}